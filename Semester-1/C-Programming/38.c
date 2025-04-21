#include<stdio.h>
int main () {
    int a,b,arev=0;
    printf("Enter a Number : ");
    scanf("%d",&a);
    b = a;
    while(b!=0){
        arev = arev * 10 + (b%10);
        b = b/10;        
    }
    if (a == arev)
    printf("IT IS A PALLINDROME");
    else
    printf("IT IS NOT A PALLINDROME");
}