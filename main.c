/*
* main.c - lexical analyzer for Scanner : main (HW2)
*/

#include <stdio.h>
#include <stdlib.h>
#include "tn.h"
extern yylex();
extern char* yytext;
extern int linenum;
extern int cErrors;


/*
* printToken
* line number, token type, ST index (ident�� ��츸), Token�� ����Ʈ
*/
void printToken(enum tokentypes tn) {
    switch (tn) {

        // �ּ�
    case TCMT:
        printf("%-20d %-30s %-20s %-30s\n", linenum, "comment", " ", yytext);
        break;
        
        // keyword
    case TCONST: 
    case TELSE:
    case TIF:
    case TINT:
    case TRETURN:
    case TVOID:
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

        // identifier
    case TIDENT: 
        printf("%-20d %-30s %-20s %-30s\n", linenum, "add assign", " ", yytext);
        break;

        // number
    case TNUMBER: 
        printf("%-20d %-30s %-20s %-30s\n", linenum, "number", " ", yytext);
        break;

        // ��ȣ
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





void main()
{
    // token type�� ������ ���� ����
    enum tokentypes tn;

    // ǥ �����
    printf("=========================================================================================================\n");
    printf("%-20s %-30s %-20s %-30s\n", "Line number", "Token type", "ST-index", "Token");
    printf("=========================================================================================================\n");
    

    // token�� ���
    while((tn=yylex()) != TEOF){
        printToken(tn);
    }

    printf("\n1976393 ������\n2076278 ������\n2076285 �̰���");
}