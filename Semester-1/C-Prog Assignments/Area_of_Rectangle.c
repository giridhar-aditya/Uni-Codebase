#include<stdio.h>
int main() {
    int b,h,ar;                              //AREA OF RECTANGLE
    printf("THIS IS A PROGRAM TO FIND THE AREA OF A RECTANGLE\n");
    printf("Enter the value for base :");
    scanf("%d",&b);
    printf("Enter the value for height :");
    scanf("%d",&h);
    ar=b*h;
    printf("The area of the triangle is %d ",ar);
}