#include<stdio.h>
void rev(int x[],int l);
int main() {
    int n,a[50];
    printf("Enter the Range for array :");
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        printf("Value %d :",i+1);
        scanf("%d",&a[i]);
    }
    printf("REVERSE OF ARRAY :\n");
    rev(a,n);
    return 0;
}
void rev(int x[], int l){
    int i;
    for(i=l-1;i>=0;i--){
        printf("%d\t",x[i]);
    }
}