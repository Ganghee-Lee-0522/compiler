#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tn.h"
#include "glob.h"
//extern int linenum; //linenumber->cline
//extern char* yytext;
//extern int cErrors; //에러 개수

/* reporterror
* token type별로 에러를 나누고 해당 에러문 출력
 1)ILLSP : 유효하지 않은 문자가 섞인 경우
 2)ILLID : 숫자로 시작하는 경우
 3)TOOLONG : 10자 이상인 경우
*/
void reporterror(enum tnumber tn) {
	switch (tn) {
	case ILLSP:
		printf("%-20d %-35s %-20s %s is illegal IDENT\n", linenum, "***Error***", " ", yytext);
		cErrors++;
		break;

	case ILLID:
		printf("%-20d %-35s %-20s %-1s %-30s\n", linenum, "***Error***", " ", yytext, " starts with digit");
		cErrors++;
		break;

	case TOOLONG:
		printf("%-20d %-35s %-20s %-30s %-30s\n", linenum, "***Error***", " ", yytext, "too long IDENT");
		cErrors++;
		break;
	}

}