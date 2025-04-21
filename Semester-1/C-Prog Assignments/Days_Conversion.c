#include<stdio.h>
int main() {                        //DAYS CONVERSION
    int x,y,m,w,d;
    printf("Enter the number of days :");
    scanf("%d",&x);
    y = x/365;
    m = (x%365)/30;
    w = ((x%365)%30)/7;
    d = (x%365)%7;
    printf("%d Days can also be written as\n%d years\n%dmonths\n%dweeks\n%ddays",x,y,m,w,d);
    return 0;
}