#include<stdio.h>
int main() {                                //AREA OF TRIANGLE
    int b,h,ar;
    printf("PROGRAM TO FIND THE AREA OF A TRAINGLE\n");
    printf("Enter the value for base :");
    scanf("%d",&b);
    printf("Enter the value for height :");
    scanf("%d",&h);
    ar = 0.5*b*h;
    printf("The area of the traingle is %d sq.units",ar);
}