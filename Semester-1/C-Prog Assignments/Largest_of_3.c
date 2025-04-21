#include <stdio.h>
int main() {                //FINDING THE LARGEST OF THREE NUMBERS
    int a,b,c,d;
    d=0;
    printf("PROGRAM FOR FINDING THE LARGEST NUMBER\n");
    printf("Enter Number 1 :");
    scanf("%d",&a);
    printf("Enter Number 2 :");
    scanf("%d",&b);
    printf("Enter Number 3 :");
    scanf("%d",&c);
    if (a>b) {
        d=a;
    }
    if (b>a) {
        d=b;
    }
    if (c>b) {
        d=c;
    }
    printf("The Largest Number is %d",d);
    return 0;
}