#include<stdio.h>
int main() {
    int i,x=0,y=1,z;
    printf("0\t1");
    for(i=0;i<10;i++){
        z = x + y;
        x = y;
        y = z;
        printf("\t%d",x+y);
    }
}

