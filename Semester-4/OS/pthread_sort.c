#include<stdio.h>
#include<pthread.h>
int arr[] = {5,4,3,2,1,5,4,3,2,1},temp;
void* sort(int item){
    if(item==0){printf("Thread 1 is Sorting\n");}
    else{printf("Thread 2 is Sorting\n");}
    printf("ITEM : %d\n",item);
    for(int i=item;i<item+4;i++){
        for(int j=item;j<item+4;j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void main(){
    pthread_t p1,p2;
    pthread_create(&p1,NULL,sort,0);
    pthread_create(&p2,NULL,sort,5);
    pthread_join(p1,NULL);
    pthread_join(p2,NULL);
    for(int i=0;i<10;i++){
        printf("%d\t",arr[i]);
    }
}