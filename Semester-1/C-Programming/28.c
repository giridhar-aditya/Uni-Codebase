#include<stdio.h> 
int main()
{
int a,b;
char operator;
printf("enter the operator :");
scanf("%c",&operator);
printf("enter number1:");
scanf("%d",&a);
printf("enter number2:");
scanf("%d",&b);
switch(operator){
case '+':
printf("%d",a+b);
break;
case '-':
printf("%d",a-b);
break;
case '*':
printf("%d",a*b);
break;
case '/':
printf("%d",a/b);
break;
case '%':
printf("%d",a%b);
break;
}
return 0;
}
