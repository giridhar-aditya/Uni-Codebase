#include<stdio.h>
int fac(int a){
    if(a>0)
    return a*fac(a-1);
    else 
    return 1;
}
int sod(int a){
    if(a>0)
    return a%10 + sod(a/10);
}
void main () {
    int a,b;
    printf("Enter the number for factorial :");
    scanf("%d",&a);
    printf("Enter the Number for Sum of digits :");
    scanf("%d",&b);
    printf("FACTORIAL : %d\n",fac(a));
    printf("Sum : %d",sod(b));
}