/*
* main.c - 각 token에 대한 출력
* programmer – 최윤지, 윤지윤, 이강희
* date – 04/27/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include "tn.h"
extern yylex();
extern char* yytext;
extern int linenum;
extern int cErrors;

/*
* printToken() -- token type 별로 출력
* switch문에 tn을 넣어 token을 구분하고 출력
* line number, token type, ST index (ident인 경우만), Token을 프린트
*/
void printToken(enum tokentypes tn) {
    switch (tn) {

        // 주석
    case TCMT:
        printf("%-20d %-30s %-20s %-30s\n", linenum, "comment", " ", yytext);
        break;

        // keyword
    case TCONST:
        printf("%-20d %-30s %-20s %-30s\n", linenum, "keyword", " ", yytext);
        break;
    case TELSE:
        printf("%-20d %-30s %-20s %-30s\n", linenum, "keyword", " ", yytext);
        break;
    case TIF:
        printf("%-20d %-30s %-20s %-30s\n", linenum, "keyword", " ", yytext);
        break;
    case TINT:
        printf("%-20d %-30s %-20s %-30s\n", linenum, "keyword", " ", yytext);
        break;
    case TRETURN:
        printf("%-20d %-30s %-20s %-30s\n", linenum, "keyword", " ", yytext);
        break;
    case TVOID:
        printf("%-20d %-30s %-20s %-30s\n", linenum, "keyword", " ", yytext);
        break;
    case TWHILE:
        printf("%-20d %-30s %-20s %-30s\n", linenum, "keyword", " ", yytext);
        break;

        // operator
    case TADD:
        printf("%-20d %-30s %-20s %-30s\n", linenum, "addition", " ", yytext);
        break;
    case TSUB:
        printf("%-20d %-30s %-20s %-30s\n", linenum, "subtraction", " ", yytext);
        break;
    case TMUL:
        printf("%-20d %-30s %-20s %-30s\n", linenum, "multiplication", " ", yytext);
        break;
    case TDIV:
        printf("%-20d %-30s %-20s %-30s\n", linenum, "division", " ", yytext);
        break;
    case TMOD:
        printf("%-20d %-30s %-20s %-30s\n", linenum, "modulo", " ", yytext);
        break;
    case TOP: // "="
        printf("%-20d %-30s %-20s %-30s\n", linenum, "assign", " ", yytext);
        break;
    case TEQUAL: // "=="
        printf("%-20d %-30s %-20s %-30s\n", linenum, "equal", " ", yytext);
        break;
    case TNOTEQU: // "!="
        printf("%-20d %-30s %-20s %-30s\n", linenum, "not equal", " ", yytext);
        break;
    case TLESSE: // "<="
        printf("%-20d %-30s %-20s %-30s\n", linenum, "less", " ", yytext);
        break;
    case TGREATE: // ">="
        printf("%-20d %-30s %-20s %-30s\n", linenum, "grater", " ", yytext);
        break;
    case TNOT: // "!"
        printf("%-20d %-30s %-20s %-30s\n", linenum, "not", " ", yytext);
        break;
    case TAND: // "&&"
        printf("%-20d %-30s %-20s %-30s\n", linenum, "and", " ", yytext);
        break;
    case TOR: // "||"
        printf("%-20d %-30s %-20s %-30s\n", linenum, "or", " ", yytext);
        break;
    case TINC: // "++"
        printf("%-20d %-30s %-20s %-30s\n", linenum, "increase one", " ", yytext);
        break;
    case TDEC: // "--"
        printf("%-20d %-30s %-20s %-30s\n", linenum, "decrease one", " ", yytext);
        break;
    case TADDASSIGN: // "+="
        printf("%-20d %-30s %-20s %-30s\n", linenum, "add assign", " ", yytext);
        break;
    case TSUBASSIGN: // "-="
        printf("%-20d %-30s %-20s %-30s\n", linenum, "sub assign", " ", yytext);
        break;
    case TMULASSIGN: // "*="
        printf("%-20d %-30s %-20s %-30s\n", linenum, "mul assign", " ", yytext);
        break;
    case TDIVASSIGN: // "/="
        printf("%-20d %-30s %-20s %-30s\n", linenum, "div assign", " ", yytext);
        break;
    case TMODASSIGN: // "%="
        printf("%-20d %-30s %-20s %-30s\n", linenum, "mod assign", " ", yytext);
        break;

        // number
    case TNUMBER:
        printf("%-20d %-30s %-20s %-30s\n", linenum, "number", " ", yytext);
        break;

        // 괄호
    case TBRASL: // "("
        printf("%-20d %-30s %-20s %-30s\n", linenum, "open small bracket", " ", yytext);
        break;
    case TBRASR: // ")"
        printf("%-20d %-30s %-20s %-30s\n", linenum, "close small bracket", " ", yytext);
        break;
    case TBRAML: // "{"
        printf("%-20d %-30s %-20s %-30s\n", linenum, "open middle bracket", " ", yytext);
        break;
    case TBRAMR: // "}"
        printf("%-20d %-30s %-20s %-30s\n", linenum, "close middle bracket", " ", yytext);
        break;
    case TBRALL: // "["
        printf("%-20d %-30s %-20s %-30s\n", linenum, "open large bracket", " ", yytext);
        break;
    case TBRALR: // "]"
        printf("%-20d %-30s %-20s %-30s\n", linenum, "close large bracket", " ", yytext);
        break;
    case TCOMMA: // ","
        printf("%-20d %-30s %-20s %-30s\n", linenum, "comma", " ", yytext);
        break;
    case TSEMICOLON: // ";"
        printf("%-20d %-30s %-20s %-30s\n", linenum, "semicolon", " ", yytext);
        break;
    }
}


/*
* main() -- yylex()로 토큰을 받아와 출력 함수를 호출, Error 개수를 세어 출력문 구성
* switch문에 tn을 넣어 token을 구분하고 출력
* line number, token type, ST index (ident인 경우만), Token을 프린트
*/
void main()
{
    // token type을 저장할 변수 선언
    enum tokentypes tn;

    // print header
    printf("=========================================================================================================\n");
    printf("%-20s %-30s %-20s %-30s\n", "Line number", "Token type", "ST-index", "Token");
    printf("=========================================================================================================\n");
    

    while((tn=yylex()) != TEOF){
        // line number, token type, ST index (ident인 경우만), Token을 프린트
        printToken(tn);
    }


    // Error 개수 출력
    if (cErrors == 0) { // Error가 0개일 때
        printf("=========================================================================================================\n");
        printf("No errors detected\n");
        printf("=========================================================================================================\n");

    }
    else { // Error가 1개 이상일 때, Error 개수 출력
        printf("=========================================================================================================\n");
        printf("%d errors detected\n", cErrors);
        printf("=========================================================================================================\n");

    }

    // Programmer
    printf("\n1976393 최윤지\n2076278 윤지윤\n2076285 이강희");

}