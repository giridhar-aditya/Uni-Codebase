#include<stdio.h>
int main () {          //LEAP YEAR
    int y;
    printf("FIND A LEAP YEAR ?\n");
    printf("Enter the year : ");
    scanf("%d",&y);
    if (((y%4==0) && (y%100!=0)) || (y%400==0))
    printf("IT IS A LEAP YEAR ");
    else 
    printf("NOT A LEAP YEAR");
}