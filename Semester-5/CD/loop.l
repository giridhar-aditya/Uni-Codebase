%{
#include"y.tab.h"
%}
%%
for return FOR;
while return WHILE;
do return DO;
[a-zA-Z_][a-zA-Z_0-9]* return ID;
[0-9]+ return NUM;
\<|\>|\<\=|\>\=|\=\=|\!\= return REL;
[\t\n\r ] {}
. return yytext[0];
%%
int yywrap(){return 1;}