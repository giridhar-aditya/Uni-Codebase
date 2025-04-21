#include <stdio.h>
int main() {                //FINDING THE SECOND LARGEST OF THREE NUMBERS
    int a,b,c,d;
    d=0;
    printf("PROGRAM FOR FINDING THE SECOND LARGEST NUMBER\n");
    printf("Enter Number 1 :");
    scanf("%d",&a);
    printf("Enter Number 2 :");
    scanf("%d",&b);
    printf("Enter Number 3 :");
    scanf("%d",&c);
    if (a<b) {
        if (b<c){
            d=b; }
        else {
            d=c;}}
    else if (b<c){
        if (a>c){
            d=c;}
        else {
            d=a;}}
    else if (c<a){
        if(b>a){
            d=a;}
        else{
            d=b;}}
    printf("The Second Largest Number is %d",d);
    return 0;
}

