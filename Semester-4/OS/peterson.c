#include<stdio.h>
#include<pthread.h>
int flag[]={0,0},turn=0;
void lock(int self){flag[self] = 1; turn = 1-self; while(turn == 1-self && flag[1-self]==1);}
void unlock(int self){flag[self]=0;}
void* thread_1(int self){
    while(1){
        lock(self);
        printf("\nThread 0 is in Critical Region");
        unlock(self);
    }
}
void* thread_2(int self){
    while(1){
        lock(self);
        printf("\nThread 1 is in Critical Region");
        unlock(self);
    }
}
void main(){
    pthread_t t1,t2;
    pthread_create(&t1,NULL,thread_1,0);
    pthread_create(&t2,NULL,thread_2,1);
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
}