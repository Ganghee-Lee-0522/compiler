/*
* reporterror.c – error에 대한 report를 따로 처리
* progrmmer – 최윤지, 윤지윤, 이강희
* date – 05 / 30 / 2023
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tn.h"
#include "glob.h"



extern char* yytext;
extern yylex();


/*
* yyerror()
*error 메시지 직접 출력해주는 함수
*/
void yyerror(char* s) {
	if (s != "parse error") {
		printf("\t%-5d %-10s %-50s\n", cLine, yytext, s);
		cErrors++; //에러 갯수 +1
	}
}


/* reporterror
*에러문 출력함수
*cErrors = 에러 갯수 세는 변수, 에러가 있을 때마다 +1
*/
void reporterror(ERRORtypes err) {
	switch (err) {
	case wrong_funcdef: //올바르지 않은 함수 선언
		printf("\t%-5d %-15s %-50s\n", cLine, "***Error***", " Wrong function definition");
		cErrors++;
		break;

	case nosemi: //semicolon 생략됨		
		printf("\t%-5d %-15s %-50s\n", cLine, "***Error***", " Missing semicolon");
		cErrors++;
		break;

	case nobrace: //중괄호 오류
		printf("\t%-5d %-15s %-50s\n", cLine, "***Error***", " Missing brace");
		cErrors++;
		break;
	case nobracket: //대괄호 오류		
			printf("\t%-5d %-15s %-50s\n", cLine, "***Error***", " Missing bracket");
			cErrors++;
			break;
		case tlong: //identifier 10자 초과
			printf("\t%-5d %-15s %-50s\n", cLine, "***Error***", " Long identifier");
			cErrors++;
			break;
		case toverflow: //table 사이즈 초과로 overflow
			printf("\t%-5d %-15s %-50s\n", cLine, "***Error***", " Overflow");
			cErrors++;
			break;

	}
}