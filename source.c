#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tn.h"
#define FILE_NAME "testdata1.txt"
#define STsize 1000 //size of string table
#define HTsize 100 //size of hash table
#define FALSE 0
#define TRUE 1
//underscore(_)도 letter라고 판정.
#define isLetter(x) (((x) >= 'a' && (x) <='z') ||((x) >= 'A' && (x) <='Z') || ((x)=='_'))
#define isDigit(x) (((x) >= '0' && (x) <='9'))
typedef struct HTentry* HTpointer;
typedef struct HTentry {
	int index; //index of identifier in ST
	HTpointer next; //pointer to next identifier
}HTentry;
//길이 10이 넘어가면 toolong 에러로 판정.
enum errorTypes { noerror, illsp, illid, overst, toolong };
typedef enum errorTypes ERRORtypes;
char seperators[] = " .,;:?!\t\n";
HTpointer HT[HTsize];
char ST[STsize];
int nextid = 0; //the current identifier
int nextfree = 0; //the next available index of ST
int hashcode; //hash code of identifier
int sameid; //first index of identifier
int found; //for the previous occurrence of an identifier
ERRORtypes err;
FILE* fp; //to be a pointer to FILE
char input;
//Initialize - open input file
void initialize() {
	fp = fopen(FILE_NAME, "r");
	input = fgetc(fp);
}
//isSeperator - distinguish the seperator
int isSeperator(char c) {
	int i;
	int sep_len;
	sep_len = strlen(seperators);
	for (i = 0; i < sep_len; i++) {
		if (c == seperators[i])
			return TRUE;
	}
	return FALSE;
}
//printHeading - Print the heading
void PrintHeading() {
	printf("\n\n");
	printf(" ----------- ---------- \n");
	printf(" Index in ST identifier \n");
	printf(" ----------- ---------- \n");
	printf("\n");
}
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
/* PrintError - Print out error messages
overst : overflow in ST
print the hashtable and abort by calling the
function "exit()".
illid : illegal identifier. 숫자로 시작하는 경우.
illsp : illegal seperator. 유효하지 않은 문자가
섞여나온 경우.
toolong : 길이가 10이 넘는 경우.
*/
void PrintError(ERRORtypes err) {
	switch (err) {
	case overst: //ST 공간이 부족한 경우.
		printf("...Error...\tOVERFLOW");
		PrintHStable();
		exit(0);
		break;
	case illsp: //유효하지 않은 문자가 섞여나온 경우.
		printf("...Error...\t");
		for (int i = nextid; i < nextfree; i++) {
			if (ST[i] == '\n') printf("WOW");
			else printf("%c", ST[i]);
		}
		printf("\tis not allowed\n");
		break;
	case illid: //숫자로 시작하는 경우.
		printf("...Error...\t");
		while (input != EOF && (isLetter(input) || isDigit(input))) {
			printf("%c", input);
			input = fgetc(fp);
		}
		printf("\tstart with digit\n");
		break;
	case toolong: //길이가 10이 넘는 경우.
		printf("...Error...\t");
		for (int i = nextid; i < nextfree; i++) {
			printf("%c", ST[i]);
		}
		printf("\ttoo long identifier\n");
		break;
	}
}
/* Skip Seperators - skip over strings of spaces, tabs, newlines, .,;:?!
유효하지 않은 문자가 나오면 err를 illsp로 설정하고
함수 종료*/
void SkipSeperators() {
	while (input != EOF && !(isLetter(input) || isDigit(input))) {
		if (!isSeperator(input)) { //유효하지 않은 문자가 나온 경우
			err = illsp; //illsp 에러를 설정
			break; //반복문 탈출 (함수 종료)
		}
		input = fgetc(fp);
	}
}
/* ReadID - Read identifier from the input file into the string table ST directly
(append it to the previous identifier).
An identifier is a string of letters and digits, starting
with a letter.
If first letter is digit, print out error message.*/


void ReadID() {
	nextid = nextfree;
	if (isDigit(input)) { //숫자로 시작하는 경우
		err = illid;
		PrintError(err); //에러 출력
	}
	else {
		//구분자가 나올 때까지 반복. 즉 한 덩어리의 단어가 끝날 때까지 반복.
		while (input != EOF && isSeperator(input) == 0) {
			//ST 공간 부족
			if (nextfree == STsize) {
				err = overst;
				nextfree = nextid;
				PrintError(err); //에러 출력
			}
			//유효하지 않은 문자인 경우 ( & 처럼 구분자도, 알파벳도, 숫자도 아닌
			경우 )
			if (!(isLetter(input) || isDigit(input))) {
				err = illsp; //에러 상태를 illsp로 설정 (에러 출력은 나중에
				하게 됨)
			}
			ST[nextfree++] = input;
			input = fgetc(fp);
		}
		if (err == illsp) { // illsp 에러, 즉 유효하지 않은 문자가 섞여 나왔을 경우
			PrintError(err); //에러 출력
			nextfree = nextid;
		}
		else if (nextfree - nextid > 10) { //길이가 10을 넘을 경우
			err = toolong;
			PrintError(err); //에러 출력
			nextfree = nextid;
		}
		input = fgetc(fp);
	}
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
int main() {
	int i;
	PrintHeading(); //헤더 출력
	initialize(); //입력 파일 연결
	while (input != EOF) {
		err = noerror; //에러 초기화
		SkipSeperators(); //유효한 구분자 건너뛰기
		ReadID(); //구분자로 구분되는 하나의 단어 읽어들이기
		if (err != illsp && err != illid && err != toolong) {
			//ST 공간이 부족한 경우
			if (nextfree == STsize) {
				err = overst;
				PrintError(err);
			}
			ST[nextfree++] = '\0'; //identifier 끝에 공백문자 추가
			ComputeHS(nextid, nextfree); //해쉬코드 계산
			LookupHS(nextid, hashcode); //HT에 이미 존재하는지 검사
			if (!found) { //HT에 존재하지 않는 경우
				printf("%5d ", nextid);
				for (i = nextid; i < nextfree - 1; i++)
					printf("%c", ST[i]);
				printf("\t\t(entered)\n");
				ADDHT(hashcode); //HT에 추가
			}
			else { //HT에 이미 존재하는 경우
				printf("%5d ", sameid);
				for (i = nextid; i < nextfree - 1; i++)
					printf("%c", ST[i]);
				printf("\t\t(already existed)\n");
				nextfree = nextid; //ST에서 삭제
			}
		}
	}
	PrintHStable();//HT 출력
	printf("\n1976393 최윤지 \n  2076278 윤지윤 \n 2076285 이강희");
	fclose(fp);
}