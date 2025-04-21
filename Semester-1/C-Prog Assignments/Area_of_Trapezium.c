#include<stdio.h>
int main () {                                //AREA OF TRAPEZIUM
    int a,b,h,ar;
    printf("THIS PROGRAM IS TO FIND THE AREA OF A TRAPEZIUM\n");
    printf("Enter the value of Parallel side 1 :");
    scanf("%d",&a);
    printf("Enter the value of Parallel side 2 :");
    scanf("%d",&b);
    printf("Enter the value of height :");
    scanf("%d",&h);
    ar=0.5*h*(a+b);
    printf("The area of the Trapezium is equal to : %d",ar);
}