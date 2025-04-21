#include<stdio.h>
int fact(int a){
    if(a>0){return a*fact(a-1);}
    else return 1;
}
int fibb(int f,int s,int a){
    int z;
    if(f==0 && s==1) printf("0\t1");
    if(a>0){z=f+s;f=s;s=z;printf("\t%d",z);
    fibb(f,s,--a);
    }
}
void main() {
    int a;
    printf("Enter the Number :");
    scanf("%d",&a);
    printf("FACTORIAL : %d\n",fact(a));
    printf("FIBONACCI SERIES : "); fibb(0,1,a-2);
}