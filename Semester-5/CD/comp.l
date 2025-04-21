%{
#include"y.tab.h"
%}
%%
if return IF;
else return ELSE;
for return FOR;
while return WHILE;
do return DO;
\".*\" return STR;
[0-9]+ return NUM;
[a-zA-Z_][a-zA-Z_0-9]* return ID;
\<|\>|\<\=|\>\=|\=\=|\!\= return REL;
[\t\n\r ] {}
. return yytext[0];
%%
int yywrap(){return 1;}