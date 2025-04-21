%{
#include<stdio.h>
FILE *ipf, *opf;
%}
%%
"/*".*"*/" {}
.|\n {fputc(yytext[0],opf);}
%%
int main(){
    ipf = fopen("inp.txt","r");
    opf = fopen("out.txt","a");
    yyin = ipf;
    yylex();
    fclose(ipf);
    fclose(opf);
    return 0;
}
int yywrap(){return 1;}