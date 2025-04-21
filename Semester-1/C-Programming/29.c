#include<stdio.h>
int main () {
    int regno,a[5],i,sum=0,avg,j;
    char name[30],temp='p';
    printf("Enter the Name of the student :");
    scanf("%s",name);
    printf("Enter the register number:");
    scanf("%d",&regno);
    for(i=0;i<5;i++){ 
        printf("Enter the Mark %d :",i+1);
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    avg=sum/5;
    for(j=0;j<5;j++){
        if (a[j]<50)
        temp='f';
        break;
    }
    if(temp=='p'){
        printf("Name : %s\nRegister Number : %d\nTotal : %d\nAverage : %d\n",
        name,regno,sum,avg);
        if(avg>=75)
        printf("First Class with Distinction");
        else if((avg>=60) && (avg<75))
        printf("First Class");
        else if((avg>=50) && (avg<60))
        printf("Second Class");
        printf("\nPASS");
    }
    else 
    printf("Name : %s\nRegister Number : %d\nFAIL",name,regno);
    return 0;        
    }

