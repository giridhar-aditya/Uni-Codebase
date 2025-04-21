#include<stdio.h>
int sum(int x[100],int l);
int main () {
    int a[100],n;
    printf("Enter the number of inputs :");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter Element %d :",i+1);
        scanf("%d",&a[i]);
    }
    printf("THE SUM OF NATURAL NUMBERS = %d",sum(a,n));
}
int sum(int x[],int l){
    int i,sum=0;
    for(i=0;i<l;i++){
        sum+=x[i];
    }
    return sum;
}