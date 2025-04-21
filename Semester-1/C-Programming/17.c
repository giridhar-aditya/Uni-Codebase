/*Write a C program to read 5 subject marks from a student and calculate the
Average. Then print the student’s name with Average in the result*/
#include<stdio.h> //Pre-processor directive
int main () {  //main function header
    int i,sum=0,a; //declaring required integers
    char name[30]; //character array for storing name
    printf("Enter the student Name :"); //asking name
    scanf("%s",name); //taking name
    for(i=1;i<6;i++){ //for loop for taking marks as input
        printf("Enter the Mark %d :",i); //asking marks
        scanf("%d",&a); //storing marks
        sum+=a; //summing up all the five marks
    }
    printf("%s scored an average of %d marks",name,sum/5); //printing the average
    return 0; //status of execution
}