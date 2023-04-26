#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tn.h"

extern int linenum; //라인 줄 수
extern int yyleng;
extern char* yytext;
extern reporterror(enum tokentype tn);

#define STsize 1000 //string table 사이즈
#define HTsize 100 //hash table 사이즈
#define FALSE 0
#define TRUE 1

typedef struct HTentry* HTpointer;
typedef struct HTentry {
	int index; //ST에 있는 identifier의 인덱스
	HTpointer next; //다음 identifier에 대한 포인터
}HTentry;

HTpointer HT[HTsize];
char ST[STsize];

int nextid = 0; //현재 identifier
int nextfree = 0; //ST에서 가능한 다음 index 번호the next available index of ST
int hashcode; //identifier의 hash code
int sameid; //identifier의 첫번째 index
int found; //identifier가 ST에 이미 존재할 경우

//identifier의 hash code들을 모두 더하여 modulo연산을 수행
void ComputeHS(int nid, int nfree) {
	int code, i;
	code = 0;
	for (i = nid; i < nfree - 1; i++) {
		code += (int)ST[i];   //hash code더하기
	}
	hashcode = code % HTsize;   //modulo
}

//identifier가 이전에 삽입된 적 있는지 살펴봄 이미 존재한다면 ST에 이미 존재하는 시작 index를 불러옴
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

//hash table에 새로운 identifier를 추가
//null이었으면 바로 추가하고, 이미 존재한다면 linked list로 연결
void ADDHT(int hscode) {
	HTpointer ptr;
	ptr = (HTpointer)malloc(sizeof(ptr));
	ptr->index = nextid;
	ptr->next = HT[hscode];
	HT[hscode] = ptr;
}

//메인 함수
int SymbolTable()
{
	nextid = nextfree;

	// yytext 한글자씩 ST에 넣음
	for (int i = 0; i < yyleng; i++) {
		ST[nextfree++] = yytext[i];
	}
	
	// identifier를 다 넣은 후
	ST[nextfree++] = '\0';

	// 각 identifer에 대해 hastable에 이미 있는지를 확인
	ComputeHS(nextid, nextfree);
	LookupHS(nextid, hashcode);
 	
	//처음 등장한 identifier일 경우
	if (!found) { 
		// line number, Token-type, ST-index(identifier인 경우), token 순으로 출력
		printf("%-20d %-30s %-20d %-30s\n", linenum, "Identifier", nextid, yytext);
		ADDHT(hashcode); // HT 삽입
	}
	//identifier가 이미 존재하는 경우
	else { 
		// line number, Token-type, ST-index(identifier인 경우), token 순으로 출력
		printf("%-20d %-30s %-20d %-30s\n", linenum, "Identifier", sameid, yytext);
		nextfree = nextid; //이번에 ST에 읽은 identifier를 다음에 덮어씀
	}

}
