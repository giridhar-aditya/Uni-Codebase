#include<stdio.h>
#include<string.h>
void rev(char x[],int l);
int main() {
    char a[50];    
    printf("Enter your string :");
    gets(a);    
    printf("REVERSE OF STRING :");
    rev(a,strlen(a));
    return 0;
}
void rev(char x[], int l){
    int i;
    for(i=l-1;i>=0;i--){
        printf("%c",x[i]);
    }
}