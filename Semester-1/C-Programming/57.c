#include<stdio.h>
void calc(){
    int a,b,n;
    float sum=0;
    char ch;
    printf("Enter 1st digit:");
    scanf("%d",&a);
    printf("Enter 2nd digit:");
    scanf("%d",&b);
    printf("1.ADDITION\n2.SUBRACTION\n3.MULTIPLICATION\n4.DIVISION\n");
    printf("Enter your choice:");
    scanf("%d",&n);
    switch(n){
        case 1:
        sum=a+b;
        printf("Sum of the digits is %f",sum);
        break;
        case 2:
        sum=a-b;
        printf("Difference of the digits is %f",sum);
        break;
        case 3:
        sum=a*b;
        printf("Product of the digits is %f",sum);
        break;
        case 4:
        sum=a/b;
        printf("Quotient of the digits is %f",sum);
        break;
        default:
        printf("Invalid choice\n");
        calc();
        return;
    }
    scanf("%c",&ch);
    printf("\nDo you want to continue(y/n):");
    scanf("%c",&ch);
    if(ch=='y')
    calc();
}
void main(){
    calc();
}