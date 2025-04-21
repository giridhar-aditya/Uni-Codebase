#include<stdio.h>
#include<semaphore.h>
#include<pthread.h>
sem_t forks[5];
void* philosopher(int i){
    int left = i,right= (i+1)%5;
    while(1){
        printf("\nphilosopher %d is Thinking",i);
        sem_wait(&forks[left]); sem_wait(&forks[right]);
        printf("\nphilosopher %d is Eating",i);
        sem_post(&forks[left]); sem_post(&forks[right]);
        printf("\nphilospher %d is Sleeping",i);
    }
}
void main(){
    pthread_t p[5]; int i;
    for(i = 0; i < 5; i++) {
        sem_init(&forks[i], 0, 1);
    }
    for(i = 0; i < 5; i++) {
        pthread_create(&p[i], NULL, philosopher, i);
    }
    for(i = 0; i < 5; i++) {
        pthread_join(p[i], NULL);
    }
}