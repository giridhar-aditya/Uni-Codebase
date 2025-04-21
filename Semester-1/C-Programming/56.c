#include<stdio.h>
#include<string.h>
int rev(char a[],int l){
    if(l>0){printf("%c",a[l-1]); rev(a,l-1);}
}
void main () {
    char a[100]; 
    printf("Enter your String :");
    gets(a);
    printf("Reversed string :\n");
    rev(a,strlen(a));
}