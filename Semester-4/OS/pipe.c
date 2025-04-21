#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<string.h>
int main(){
	char phrase[] = "Toji Fushiguro",message[100];
	int fd[2],bytes;
	pipe(fd);
	if(fork() == 0){
		close(fd[0]);
		write(fd[1],phrase,strlen(phrase));
		close(fd[1]);
	}
	else{
		close(fd[1]);
		bytes = read(fd[0],message,100);
		printf("Read %d Bytes : %s",bytes,message);
		close(fd[0]);
	}
}
