/*Write a C program to print the student’s report card by printing the name,
register number, Mark1, Mark2, Mark3, Mark4, Mark5, total and Average by using
escape sequences. The output must be neatly formatted and it shouldn’t be lines
of unformatted text.*/
#include<stdio.h> //Pre-processor directive
int main () { //main function header
    int i,j,sum=0,a[5],rn; //declaring required integers
    char name[30]; //character array for storing name
    printf("Enter the student Name :"); //asking name
    scanf("%s",name); //taking name
    printf("Enter register number :"); //asking register number
    scanf("%d",&rn); //storing register number in a
    for(i=0;i<5;i++){ //for loop for taking marks as input
        printf("Enter the Mark %d :",i+1); //asking marks
        scanf("%d",&a[i]); //storing marks
        sum+=a[i]; //summing up all the five marks
    }
    printf("Student Name :%s\n",name); //printing student name
    printf("Register Number :%d",rn); //printing register number
    for(j=0;j<5;j++) { //for loop 5 times
        printf("Mark %d = %d\n",j+1,a[j]); //using for loop to print marks
    }
    printf("The total is :%d\nThe Average is: %d",sum,sum/5); //printing total and average
    return 0; //status of execution
}