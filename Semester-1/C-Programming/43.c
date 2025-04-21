#include<stdio.h>
int factorial(int x);
int fibonacci(int x);
int main() {
    int a;
    printf("Enter the number :");
    scanf("%d",&a);
    printf("THE FACTORIAL IS %d\n",factorial(a));
    printf("THE FIBONACCI SERIES :");
    fibonacci(a);
}
int factorial(x){
    int i,f=1;
    for(i=1;i<x+1;i++){
        f*=i;
    }
    return f;
}
int fibonacci(x){
    int x1=0,y=1,z;
    printf("\t0\t1\t1");
    for(int i=0;i<x-3;i++){
        z = x1+y;
        x1 = y;
        y = z;
        printf("\t%d",x1+y);
    }
}
