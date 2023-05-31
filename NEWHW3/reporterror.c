/*
* reporterror.c – error에 대한 report를 따로 처리
* progrmmer – 최윤지, 윤지윤, 이강희
* date – 06 / 01 / 2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tn.h"
#include "glob.h"



extern char* yytext;
extern yylex();


/*
* yyerror() - 사용자 error 메세지 직접 출력 함수
*/
void yyerror(char* s) {
    if (s != "parse error") { //parser_tab.c에서 발생한 parse에러가 아닌경우
        printf("\t%-5d %-10s %-50s\n", cLine, yytext, s);//에러 메세지 출력
        cErrors++;//에러수 1 증가 
    }
}


/* reporterror
*에러문 출력함수
*cErrors = 에러 갯수 세는 변수, 에러가 있을 때마다 +1
*/
void reporterror(ERRORtypes err) {
    switch (err) {
    case 0: //올바르지 않은 함수 선언
        printf("%-5d %-15s %-50s\n", cLine, "< Error > =>", " Wrong function definition");
        cErrors++;
        break;

    case 1://semicolon 생략됨
        printf("%-5d %-15s %-50s\n", cLine, "< Error > =>", " Missing semicolon");
        cErrors++;
        break;

    case 2://중괄호 오류
        printf("%-5d %-15s %-50s\n", cLine, "< Error > =>", " Missing brace");
        cErrors++;
        break;
    case 3: //대괄호 오류
        printf("%-5d %-15s %-50s\n", cLine, "< Error > =>", " Missing bracket");
        cErrors++;
        break;
    case 4:  //identifier 10자 초과 
        printf("%-5d %-15s %-50s\n", cLine, "< Error > =>", " Long identifier");
        cErrors++;
        break;
    case 5: //table 사이즈 초과로 overflow
        printf("%-5d %-15s %-50s\n", cLine, "< Error > =>", " Overflow");
        cErrors++;
        break;

    }
}