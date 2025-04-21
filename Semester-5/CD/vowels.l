%{
#include<stdio.h>
%}
%%
^(a|e|i|o|u)[a-z]+ {printf("%s is VALID\n",yytext);}
. {}
%%
int main(){
    yylex();
    return 0;
}
int yywrap(){return 1;}