%{
#include<stdio.h>
%}
%%
do {printf("DO\n");}
while {printf("WHILE\n");}
for {printf("FOR\n");}
"(" {printf("LPAREN\n");}
")" {printf("RPAREN\n");}
[a-zA-Z_][a-zA-Z_0-9]* {printf("ID\n");}
[0-9]+ {printf("NUM\n");}
[0-9]+.[0-9]+ {printf("FLOAT\n");}
\= {printf("EQ\n");}
\< {printf("LT\n");}
"+" {printf("ADD\n");}
";" {printf("SEMICOL\n");}
[\t\n\r ] {}
. {printf("%s",yytext);}
%%
int main(){
    yylex();
    return 0;
}
int yywrap(){return 1;}