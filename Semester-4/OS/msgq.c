#include<stdio.h>
#include<sys/ipc.h>
#include<sys/msg.h>
struct msg{ int msg_type; char msg_txt[100];} message;
int main(){
	key_t key; key = ftok("kags",144);
	int msgid; char g;
	msgid = msgget(key,0666|IPC_CREAT);
	printf("Enter the Message Type : "); scanf("%d",&message.msg_type); scanf("%c",&g);
	printf("Enter the Message :"); gets(message.msg_txt);
	msgsnd(msgid,&message,sizeof(message.msg_txt),0);
	printf("Message Sent Successfully");
}
