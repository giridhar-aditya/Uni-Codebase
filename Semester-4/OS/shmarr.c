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
shmid=shmget((key_t)8024,5*sizeof(int),0666|IPC_CREAT);
printf("key of shared memory is %d\n",shmid);
shared_memory = (int *)shmat(shmid, 0, 0);

shared_memory = malloc(sizeof(int)*5);

for(i=0; i<5; i++)
{
    scanf("%d",&shared_memory[i]);
}

for(i=0; i<5; i++)
{
    printf("\n%d---\n", shared_memory[i]);
}
return 0;
}
