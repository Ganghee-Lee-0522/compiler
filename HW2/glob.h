/*
* glob.h – global variable for the project
* progrmmer – 최윤지, 윤지윤, 이강희
* date – 04 / 27 / 2023
*/

#define MaxIdentLen 10    // identifier의 최대 길이
extern char* yytext;   // 렉스 정규표현과 매칭된 문자열
extern int yyleng;  // 매칭된 문자열의 길이
extern int linenum = 1;  // 코드에서의 line number
extern int cErrors = 0; // 에러 개수
