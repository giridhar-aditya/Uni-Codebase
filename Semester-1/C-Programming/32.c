#include<stdio.h>
int main() {
    int a=1,b=1,n;
    printf("Enter the required range :");
    scanf("%d",&n);
    while(a<=n){
        if(a%2==1)
        printf("\t%d",a);
        a++;}
    do{
    if(b%2==0)
    printf("\t%d",b);
    b++;}
    while(b<=n);

    

}