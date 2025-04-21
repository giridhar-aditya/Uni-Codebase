#include<stdio.h>>
int main () {            //CALCULATING CURRENT
    float i,r,v;
    printf("THIS IS PROGRAM TO FIND CURENT\n");
    printf("Enter the value of VOLTAGE :");
    scanf("%f",&v);
    printf("Enter the value of RESISTANCE :");
    scanf("%f",&r);
    i=v/r;
    printf("THE CURRENT IS %.2f amperes",i);
}

