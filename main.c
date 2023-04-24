#include <stdio.h>
#include <stdlib.h>
#include "tn.h"
extern yylex();
extern char* yytext;

void main()
{
    enum tokentypes tn;
    
    while((tn=yylex()) != TEOF){
        switch (tn) {
            case TCONST : printf("TCONST %s\n", yytext); break;
            case TELSE : printf("TELSE %s\n", yytext); break;
            case TIF : printf("TIF %s\n", yytext); break;
            case TINT : printf("TINT %s\n", yytext); break;
            case TRETURN : printf("TRETURN %s\n", yytext); break;
            case TVOID : printf("TVOID %s\n", yytext); break;
            case TWHILE : printf("TWHILE %s\n", yytext); break;
            case TEQUAL : printf("TEQUAL %s\n", yytext); break;
            case TNOTEQU : printf("TNOTEQU %s\n", yytext); break;
            case TLESSE : printf("TLESSE %s\n", yytext); break;
            case TGREATE : printf("TGREATE %s\n", yytext); break;
            case TAND : printf("TAND %s\n", yytext); break;
            case TOR : printf("TOR %s\n", yytext); break;
            case TINC : printf("TINC %s\n", yytext); break;
            case TDEC : printf("TDEC %s\n", yytext); break;
            case TADDASSIGN : printf("TADDASSIGN %s\n", yytext); break;
            case TSUBASSIGN : printf("TSUBASSIGN %s\n", yytext); break;
            case TMULASSIGN : printf("TNULASSIGN %s\n", yytext); break;
            case TDIVASSIGN : printf("TDIVASSIGN %s\n", yytext); break;
            case TMODASSIGN : printf("TMODASSIGN %s\n", yytext); break;
            case TIDENT : printf("TIDENT %s\n", yytext); break;
            case TNUMBER : printf("TNUMBER %d\n", atoi(yytext)); break;
        }
    }
}