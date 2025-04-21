#include<stdio.h>
struct process{int at,bt,bt1,ft,status,q;}rl[10];
int front = -1,rear = -1,Q[20],n,run=0;
void push(int item){
    if(front == -1){front = 0;}
    rear++; Q[rear] = item; 
}
int pop(){
    if(front == -1){return -1;}
    else{int item = Q[front]; front++; return item;}
}
int dispatcher(int cur_time){
    for(int i=0;i<n;i++){
        if(rl[i].status != 1 && rl[i].at<=cur_time && rl[i].q != 1){
            push(i); rl[i].q = 1;
        }
    }   if(run!=-1){push(run);}
    return pop();
}
void main(){
    printf("Enter the Number of Processes :"); scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter AT & BT for Process %d :",i+1); scanf("%d%d",&rl[i].at,&rl[i].bt);
        rl[i].bt1 = rl[i].bt; rl[i].status = 0; rl[i].q = 0; rl[i].ft =0;
    }
    int i=0,cur_time=0,pid,tq;
    printf("Enter the Value of Time Quantum :"); scanf("%d",&tq);
    while(i<n){
        run = dispatcher(cur_time); run = pid;
        if(pid!=-1){
            if(rl[pid].bt > tq){
                rl[pid].bt -= tq; cur_time+=tq;
            }
            else{
                rl[pid].ft = rl[pid].bt + cur_time;
                cur_time += rl[pid].bt;
                rl[pid].status = 1; 
                run = -1; i++;
            }
        }
        else{cur_time++;}
    }
    printf("\nPID\tAT\tBT\tFT\n");
	for(int i=0;i<n;i++){
		printf("%d\t%d\t%d\n",rl[i].at,rl[i].bt1,rl[i].ft);
	}
}