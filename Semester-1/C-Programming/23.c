#include<stdio.h>
int main () {
    int a,b,c,t;
    printf("Enter 3 numbers :");
    scanf("%d%d%d",&a,&b,&c);
    t=a;
    if(a>b) {
        if(a>c) {
            if(b>c)
                t=b;
            else
                t=c;
        }
    } 
    else if (b>a)
    {
        if(b>c) {
            if(c>a)
                t=c;
            else
                t=a;
        }
        
    }
    else if (c>a){
        if(c>b){
            if(b>a)
            t=b;
            else t=a;
        }
    }
    printf("The second largest number is %d",t);
}