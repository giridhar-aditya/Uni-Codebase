#include<stdio.h>
int main () {
    int i,n,sum=0;
    printf("Enter the Required Range :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d\t",i);
        sum+=i;
    }
    printf("\nSum of all Numbers = %d",sum);
    return 0;
}