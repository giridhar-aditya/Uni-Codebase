#include<stdio.h>
void calc(int x,int y);
int main() {
    int a,b;
    printf("Enter two Numbers :");
    scanf("%d%d",&a,&b);
    calc(a,b);
    return 0;
}
void calc(a,b){
    char z,m;
    printf("Enter the operator :");
    m=getchar();
    z=getchar();
    switch(z){
        case'+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '/':
        printf("%d",a/b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '%':
        printf("%d",a%b);
        break;
        default:
        printf("Enter a Valid operator");
        break;
    }

}