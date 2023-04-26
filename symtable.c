#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tn.h"
#include "glob.h"

//extern int linenum;
//extern int yyleng;
//extern char* yytext;
//extern reporterror(enum tnumber tn);

#define STsize 1000 //size of string table
#define HTsize 100 //size of hash table
#define FALSE 0
#define TRUE 1


typedef struct HTentry* HTpointer;
typedef struct HTentry {
	int index; //index of identifier in ST
	HTpointer next; //pointer to next identifier
}HTentry;

HTpointer HT[HTsize];
char ST[STsize];

int nextid = 0; //the current identifier
int nextfree = 0; //the next available index of ST
int hashcode; //hash code of identifier
int sameid; //first index of identifier
int found; //for the previous occurrence of an identifier
int input;

/*PrintHStable - Prints the hash table.
write out the hashcode and the list of identifiers
associated with each hashcode,
but only for non-emty lists.
Print out the number of characters used up in ST*/
void PrintHStable() {
	int i, j;
	HTpointer here;
	printf("\n\n\n\n\n [[ HASH TABLE ]] \n\n");
	for (i = 0; i < HTsize; i++) {
		if (HT[i] != NULL) {
			printf(" Hash Code %3d : ", i);
			for (here = HT[i]; here != NULL; here = here->next) {
				j = here->index;
				while (ST[j] != '\0' && j < STsize) {
					printf("%c", ST[j++]);
				}
				printf(" ");
			}
			printf("\n");
		}
	}
	printf("\n\n\n < %5d characters are used in the string table >\n", nextfree);
}


/* ComputeHS - Compute the hash code of identifier by summing the ordinal values
of its characters and then taking the sum modulo the size of
HT.*/
void ComputeHS(int nid, int nfree) {
	int code, i;
	code = 0;
	for (i = nid; i < nfree - 1; i++) {
		code += (int)ST[i];
	}
	hashcode = code % HTsize;
}

/* LookupHS - For each identifier, Look it up in the hashtable for previous occurrence
of the identifier. If find a match, set the found flag as
true.
Otherwise false.
If find a match, save the starting index of ST in sameid.*/
void LookupHS(int nid, int hscode) {
	HTpointer here;
	int i, j;
	found = FALSE;
	if (HT[hscode] != NULL) {
		here = HT[hscode];
		while (here != NULL && found == FALSE) {
			found = TRUE;
			i = here->index;
			j = nid;
			sameid = i;
			while (ST[i] != '\0' && found == TRUE) {
				if (ST[i] != ST[j]) {
					found = FALSE;
				}
				else {
					i++;
					j++;
				}
			}
			here = here->next;
		}
	}
}
/* ADDHT - Add a new identifier to the hash table.
If list head ht[hashcode] is null, simply add a list element with
starting index of the identifier in ST.
IF list head is not a null, it adds a new identifier to the head of
the chain*/

void ADDHT(int hscode) {
	HTpointer ptr;
	ptr = (HTpointer)malloc(sizeof(ptr));
	ptr->index = nextid;
	ptr->next = HT[hscode];
	HT[hscode] = ptr;
}

/* MAIN */
int SymbolTable()
{

	nextid = nextfree;

	// yytext 한글자씩 ST에 넣음
	for (int i = 0; i < yyleng; i++) {
		ST[nextfree++] = yytext[i];
	}
	// identifier를 다 넣은 후
	ST[nextfree++] = '\0';

	// HS계산, 각 identifer에 대해, hastable에 이미 있는지 확인
	ComputeHS(nextid, nextfree);
	LookupHS(nextid, hashcode);


	if (!found) { // 아직 같은 identifier를 ST에 넣은 적 없을 때
		// line number, Token-type, ST-index(identifier인 경우), token 순으로 출력
		printf("%-20d %-35s %-20d %-30s\n", linenum, "Identifier", nextid, yytext);
		ADDHT(hashcode); // HT 삽입
	}
	else { // 이미 같은 identifier가 있을 때

		// line number, Token-type, ST-index(identifier인 경우), token 순으로 출력
		printf("%-20d %-35s %-20d %-30s\n", linenum, "Identifier", sameid, yytext);
		nextfree = nextid; //이번에 ST에 읽은 identifier를 다음에 덮어씀
	}

	printf("\n1976393 최윤지 \n  2076278 윤지윤 \n 2076285 이강희");
	//fclose(fp);

	/*ST출력
	printf("===ST===\n");
	for (int i = 0; i < nextfree; i++) {
	if (ST[i] == '\0') printf("\n");
	else printf("%c", ST[i]);
	}
	printf("\n\n\n");
	*/
}
