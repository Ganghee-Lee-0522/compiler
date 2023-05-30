# 👩‍💻compiler

`<조건>`
- “Modified” Mini C를 위한 Scanner를 Lex (flex)를 이용하여 작성한다.
- 각 identifier가 인식되었을 때, Symbol Table로 관리한다.
- Source program에 error가 있는 경우, 가능한 한 명확하게 error message를 프린트한다.
- 각 토큰이 인식되었을 때, line number, token type, ST index(명칭(identifier)인 경우만), Token을 프린트한다.

##

`<결과>`
1. Identifier인 경우 Symbol Table에 넣어준다.
2. 각 토큰이 인식되었을 때 line number, token type, ST index (identifier인 경우만), Token을 출력한다.
3. 정의되어 있지 않은 token이 인식되었을 경우 error(ILLSP) 출력한다.
4. 숫자로 시작하는 identifier의 경우 error(ILLID) 출력한다.
5. 10자 초과하는 identifier의 경우 error(TOOLONG) 출력한다.
6. Token을 공백의 경우 " ", 탭의 경우"\t", 줄 바꿈의 경우"\n" 로 출력하도록 설정하여 각 Token이 무엇인지 더욱 명확히 구분하도록 한다.

