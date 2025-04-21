%{
#include"y.tab.h"
%}
%%
[a-zA-Z]+ {yylval.id = yytext; return ID;}
[0-9]+ {yylval.num = atoi(yytext); return NUM;}
[\t\n\r ] {}
. return yytext[0];
%%
int yywrap(){return 1;}