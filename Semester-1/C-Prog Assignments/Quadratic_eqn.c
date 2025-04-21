#include<stdio.h>
#include<math.h>
int main () {                                     //QUADRATIC EQUATION
    int a,b,c,d;
    float r1,r2;
    printf("THIS IS PROGRAM TO FIND ROOTS OF A QUADRATIC EQUATION\n");
    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d",&b);
    printf("Enter the value of c :");
    scanf("%d",&c);
    d = (b*b)-(4*a*c);
    printf("%d",d);
    if (d==0) {
        r1 = -b/(2*a);
        r2=r1;
        printf("EQUAL ROOTS : %f and %f",r1,r2);
    }
    else if (d>0) {
        r1 = (-b + sqrt(d))/(2*a);
        r2 = (-b - sqrt(d))/(2*a);
        printf("REAL AND DISTINCT ROOTS : %f and %f",r1,r2);
    }
    else   {
    printf("IMAGINARY ROOTS!!!");
    }
    return 0;
}

