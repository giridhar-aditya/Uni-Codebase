#include<stdio.h>
int factorial(int x);
int sumofdigit(int x);
int main () {
    int a,b;
    printf("Enter the Number for Factorial :");
    scanf("%d",&a);
    printf("Enter the Number for Sum of Digits :");
    scanf("%d",&b);
    printf("THE FACTORIAL IS %d",factorial(a));
    printf("\nTHE SUM OF DIGITS IS %d",sumofdigit(b));
    return 0;
}
int factorial(x){
    int i,f=1;
    for(i=1;i<x+1;i++){
        f*=i;
    }
    return f;
}
int sumofdigit(x){
    int sum=0;
    while(x!=0){
        sum+=x%10;
        x/=10;
    }
    return sum;
}