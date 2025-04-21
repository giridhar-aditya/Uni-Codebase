#include<stdio.h>
#include<semaphore.h>
#include<pthread.h>
#include<unistd.h>
#include<sys/shm.h>
sem_t mutex,full,empty;
pthread_t p,c;
static int a=100;
void* producer(){
    while(1){
        sem_wait(&empty);
        sem_wait(&mutex);
        printf("\nProducer is in Critical Section\n");
        int shmid; key_t key; key = ftok("kags",144);
        int *buffer;
        shmid = shmget(key,sizeof(int),0666|IPC_CREAT);
        buffer = shmat(shmid,NULL,0);
        *buffer = a++;
        printf("\nProducer Produced : %d",*buffer);
        sem_post(&mutex);
        sem_post(&full);
    }
}
void* consumer(){
    while(1){
        sem_wait(&full);
        sem_wait(&mutex);
        printf("\nConsumer is in Critical Section\n");
        int shmid; key_t key; key = ftok("kags",144);
        int *buffer;
        shmid = shmget(key,sizeof(int),0666);
        buffer = shmat(shmid,NULL,0);
        printf("\nConsumer Consumed : %d",*buffer);
        sem_post(&mutex);
        sem_post(&empty);
    }
}
void main(){
    pthread_create(&p,NULL,producer,0);
    pthread_create(&c,NULL,consumer,0);
    sem_init(&mutex,0,1);
    sem_init(&full,0,0);
    sem_init(&empty,0,1); //Change Initial value of empty to change number of times producer runs
    pthread_join(p,NULL);
    pthread_join(c,NULL);
}