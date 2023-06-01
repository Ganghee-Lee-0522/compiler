/*
* main.c - 각 token에 대한 출력
* progrmmer – 최윤지, 윤지윤, 이강희
* date – 06 / 01 / 2023
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

	// 각 변수 초기화
	cLine = 1;
	nextid = 0;
	nextfree = 0;

	// 파싱 및 에러 타입 출력
	yyparse();


	printf("==================================================================================\n");
	printf("Parsing ends.***");

	printf("\t %d error(s) detected\n\n\n\n", cErrors);

	// HS테이블 출력
	PrintHStable();

	printf("\n\n1976393 최윤지, 2076278 윤지윤, 2076285 이강희\n");
}