#include<stdio.h>
int sum (int a[],int l){
    if(l>=0){
        return a[l]+sum(a,l-1);}
    else return 0;
}
void main() {
    int a[100],n;
    printf("Enter the number of inputs :");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter Element %d :",i+1);
        scanf("%d",&a[i]);
    }
    printf("THE SUM OF NATURAL NUMBERS = %d",sum(a,n-1));
}