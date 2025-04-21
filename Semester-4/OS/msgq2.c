#include<stdio.h>
#include<sys/ipc.h>
#include<sys/msg.h>
struct msg{ int msg_type; char msg_txt[100];} message;
int main(){
	key_t key; key = ftok("kags",144);
	int msgid;
	msgid = msgget(key,0666|IPC_CREAT);
	printf("Enter the Message Type : "); scanf("%d",&message.msg_type); 
	msgrcv(msgid,&message,sizeof(message.msg_txt),message.msg_type,0);
	printf("The Message recieved is : %s",message.msg_txt);
}
