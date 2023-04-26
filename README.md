## compiler

- “Modified” Mini C를 위한 Scanner를 Lex (flex)를 이용하여 작성한다.
- 각 identifier가 인식되었을 때, Symbol Table로 관리한다.
- Source program에 error가 있는 경우, 가능한 한 명확하게 error message를 프린트한다.
- 각 토큰이 인식되었을 때, line number, token type, ST index(명칭(identifier)인 경우만), Token을 프린트한다.
