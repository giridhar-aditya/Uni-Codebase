#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){

int i,n;
int buff[5];
int *shared_memory;
int shmid;
shmid=shmget((key_t)8024,5*sizeof(int),0666);
printf("key of shared memory is %d\n",shmid);
shared_memory = malloc(sizeof(int)*5);
printf("Shared memory address : %p\n",shared_memory);
return 0;
}
