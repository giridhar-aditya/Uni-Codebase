%{
#include<stdio.h>
FILE *ipf, *opf;
%}
%%
"scanf" {fprintf(opf,"printf");}
.|\n {fputc(yytext[0],opf);}
%%
int main(){
    ipf = fopen("input_ptos.txt","r");
    opf = fopen("out.txt","a");
    yyin = ipf;
    yylex();
    fclose(ipf);
    fclose(opf);
    return 0;
}
int yywrap(){return 1;}