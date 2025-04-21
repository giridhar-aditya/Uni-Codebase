#include<stdio.h>
int gcd(int x,int y);
int lcm(int x,int y);
int main (){
    int a,b;
    printf("Enter two numbers :");
    scanf("%d%d",&a,&b);
    printf("THE LCM OF %d and %d is %d\n",a,b,lcm(a,b));
    printf("THE GCD OF %d and %d is %d",a,b,gcd(a,b));
    return 0;
}
int gcd(a,b){
    while(a!=b){
        if (a>b)
        a-=b;
        else
        b-=a;
    }
    return a;
}
int lcm(x,y){
    int z;
    if(x<y) z=x;
    else z=y;
    while(1){
        if(z%x==0 && z%y==0){
        return z;
        break;}
        z++;
    }

}