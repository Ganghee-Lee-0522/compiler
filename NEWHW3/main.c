/*
* main.c - lexical analyzer for Scanner : main (HW3)
*
* Programmer - team2
*
* date -  5/26/2021
*
*/
#include <stdio.h>
#include <stdlib.h>
#include "glob.h"
#include "tn.h"

extern int yyparse();
extern void PrintHStable();

void main() {

	printf("\n[Error Report : Error Information]\n");
	printf("==================================================================================\n");

	/* cLine, nextid, nextfree 초기화 */
	cLine = 1;
	nextid = 0;
	nextfree = 0;

	/* 파싱 및 에러 타입 출력 */
	yyparse();


	printf("==================================================================================\n");
	printf("Parsing ends.***");

	printf("\t %d error(s) detected\n\n\n\n", cErrors);

	/* HS테이블 출력*/
	PrintHStable();
}