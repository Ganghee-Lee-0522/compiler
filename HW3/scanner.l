%{
/* scanner.l - lexical analyzer for the MiniC
* programmer – 최윤지, 윤지윤, 이강희
* date – 05/30/2023 
*/
#include <stdio.h>
#include <stdlib.h>
#include "tn.h"
#include "glob.h"

extern ComputeHS(int nid, int nfree);
extern LookupHS(int nid, int nfree);
extern SymbolTable();
extern ADDHT(int hscode);
extern PrintHStable();
extern yyerror(char *s);
int i;

%}

A	[a-zA-Z_] 
D	[0-9] 
%%

 /*
 * Keyword
 */

"const" return(TCONST);
"else" return(TELSE);
"if" return(TIF);
"int" return(TINT);
"float" return(TFLOAT);
"return" return(TRETURN);
"void" return(TVOID);
"while" return(TWHILE);


 /*
 * 주석
 "//".*  return(TCMT);
 */

\/\/.* ;

 /*
 * Identifier MacIdentLen(10)보다 크면 에러
 */
{A}({A}|{D})* {
    if(yyleng>MaxIdentLen){ 
        reporterror(TLONG);
    }
    else {
        SymbolTable();
    }
}

 /*
 * 숫자로 시작하는 Identifier는 에러
 */
{D}({A}|{D})*{A}({A}|{D})* { 
reporterror(ILLID);
}

 /*
 * constant
 */
{D}+	return(TNUMBER);

 /*
 * operator
 */
"+" return(TPLUS);
"-" return(TMINUS);
"*" return(TSTAR);
"/" return(TSLASH);
"%" return(TMOD);
"=" {return(TASSIGN);}
"+=" return(TADDASSIGN);
"-=" return(TSUBASSIGN);
"*=" return(TMULASSIGN);
"/=" return(TDIVASSIGN);
"%=" return(TMODASSIGN);
"!" return(TNOT);
"&&" return(TAND);
"||" return(TOR);
"==" return(TEQUAL);
"!=" return(TNOTEQU);
"<" return(TLESS);
">" return(TOVER);
"<=" return(TLESSE);
">=" return(TOVERE);
"++" return(TINC);
"--" return(TDEC);

 /*
 * Special Symbols
 */
"(" {return(TOSBRA);}
")" { return(TCSBRA);}
"," {return(TCOMMA);}
"{" return(TOMBRA);
"}" return(TCMBRA);
"[" return(TOLBRA);
"]" return(TCLBRA);
";" {return(TSEMI);}

 /*
 * White spaces
 */
[ \t] ;
[\n] {
  cLine++;
}

 /*
 * 나머지 경우는 에러, 유효하지 않은 문자가 포함된 
 */
.   reporterror(ILLSP);
%%

int yywrap()
{
    return 1;
}
