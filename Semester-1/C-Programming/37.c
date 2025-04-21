#include<stdio.h>
void main(){
    int a,d=1;    
    printf("Enter your digit :");
    scanf("%d",&a);
    while(a>=10){
        a/=10;
        d+=1;
    }
    printf("%d",d);
}