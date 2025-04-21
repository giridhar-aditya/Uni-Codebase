#include<stdio.h>
int main(){
     //pattern 1//
    for(int i=1;i<6;i++){
        for(int j=0;j<i;j++){   
            printf("*");
        }
        printf("\n");
    }
    //pattern 2//
    for(int i1=1;i1<6;i1++){
        for(int k=1;k<6-i1;k++){
            printf(" ");
        }
        for(int j2=0;j2<i1;j2++){
            printf("*");
        }
        printf("\n");
    }
    //pattern 3//
    for(int x=0;x<3;x++){
        for(int y=1;y<3-x;y++){
            printf(" ");
        }
        for(int z=0;z<2*x+1;z++){
            printf("*");
        }
        printf("\n");
    }

}