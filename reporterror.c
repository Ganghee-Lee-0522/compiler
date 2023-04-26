#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tn.h"
extern int linenum; 
extern char* yytext;
extern int cErrors; //에러 개수

//token type별로 에러를 나누고 해당 에러문 출력
void reporterror(enum tokentype tn) {
	switch (tn) {
	//ILLSP : 유효하지 않은 문자가 섞인 경우
	case ILLSP:
		printf("%-20d %-30s %-20s %s is illegal IDENT\n", linenum, "***Error***", " ", yytext);
		cErrors++;
		break;
	//ILLID : 숫자로 시작하는 경우
	case ILLID:
		printf("%-20d %-30s %-20s %-1s %-30s\n", linenum, "***Error***", " ", yytext, " starts with digit");
		cErrors++;
		break;
	//TOOLONG : 10자 이상인 경우
	case TOOLONG:
		printf("%-20d %-30s %-20s %-30s %-30s\n", linenum, "***Error***", " ", yytext, "too long IDENT");
		cErrors++;
		break;
	}

}
