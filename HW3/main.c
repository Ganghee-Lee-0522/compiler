/*
* main.c - lexical analyzer for Scanner : main
*
* Programmer - team4 (1976393 최윤지, 2076278 윤지윤, 2076285 이강희)
*
* date -  5/30/2023
*
*/
#include <stdio.h>
#include <stdlib.h>
#include "tn.h"
#include "glob.h"

extern int yyparse();
extern void PrintHStable();

void main() {

	//look_id = (HTptr)malloc(sizeof(struct HTentry));
	//look_tmp = (HTptr)malloc(sizeof(struct HTentry));

	printf("\n\n\t\t\t    ***MiniC parsing begins\n");
	printf("==================================================================================\n");

	/* cLine, nextid, nextfree 초기화 */
	cLine = 1;
	nextid = 0;
	nextfree = 0;

	/* 파싱 및 에러 타입 출력 */
	yyparse();

	printf("==================================================================================\n");
	printf("\n\t\t  ===> Parsing ends.***");


  //no로 할지 0으로 할지
	if (cErrors == 0) {
		printf("\t no errors detected\n\n\n\n");
	}
	else
    printf("\t %d error(s) detected\n\n\n\n", cErrors);

	/* HS테이블 출력*/
	PrintHStable();
}
