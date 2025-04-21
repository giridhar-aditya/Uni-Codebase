#include<math.h>
#include<stdio.h>
int main () {                           //ROOT OF ANY NATURAL NUMBER
    double a,root;
    printf("THIS IS A PROGRAM TO FIND THE SQUARE ROOT OF A NUMBER\n");
    printf("Enter any Natural number :");
    scanf("%lf",&a);
    root = sqrt(a);
    printf("The square root of %lf is equal to %lf",a,root);
}