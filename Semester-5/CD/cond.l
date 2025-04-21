%{
#include"y.tab.h"
%}
%%
if return IF;  
else return ELSE;
[0-9]+ return NUM;
[a-zA-Z_][a-zA-Z_0-9]* return ID;
\<|\>|\<\=|\>\=|\=\=|\!\= return REL;
[\n\t\r ] {}
. return yytext[0];
%%
int yywrap(){return 1;}