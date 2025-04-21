#include <stdio.h>
# define PI 3.14
int main (){                                    //VOLUME OF SPHERE
    int r,ar;
    printf("THIS IS A PROGRAM TO FIND THE VOLUME OF A SPHERE :\n");
    printf("Enter the Value of radius in Centimeters : ");
    scanf("%d",&r);
    ar= (4*PI*(r*r*r))/3;
    printf("The Volume of the Sphere = %d",ar);
}