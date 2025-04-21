#include<stdio.h>
int main() {
    int a[10][10],b[10][10],m[10][10],r,c,i,j,k;
    printf("Enter Number of Rows :");
    scanf("%d",&r);
    printf("Enter Number of Columns :");
    scanf("%d",&c);
    printf("Enter the elements of Matrix A\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("The element A%d%d =",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of Matrix B\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("The element B%d%d =",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            m[i][j]=0;
            for(k=0;k<c;k++){
                m[i][j]+= a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",m[i][j]);
            }
            printf("\n");
    }
}