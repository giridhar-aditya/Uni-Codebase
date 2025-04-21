#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<string.h>
int main(){
	int pid;
	printf("The original process\nPID : %d\nPPID : %d\n",getpid(),getppid());
	pid = fork();
	if(pid == 0) printf("I'm the Child Process\nPID : %d\nPPID : %d\n",getpid(),getppid());	
	else printf("I'm the parent Process\nPID : %d\nPPID : %d\n",getpid(),getppid());
}
