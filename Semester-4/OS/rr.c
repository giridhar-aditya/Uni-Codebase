#include<stdio.h>
  int q[10],front=-1,rear=-1,n,run=-1;


  void push(int pid){
	if(front==-1){
		front=rear=0;
		q[front]=pid;
		
		printf("%d is being pushed and the queue has that...",q[rear]+1);
		for(int i=0;i<=rear;i++){
		printf("%d ",q[i]+1);}
		printf("\n");
	
	}
	else{
		rear++;
		q[rear]=pid;
		
		printf("%d is being pushed and the queue looks...",q[rear]+1);
		for(int i=0;i<=rear;i++){
		printf("%d ",q[i]+1);}
		printf("\n");
	}
	
		
	

  }

  int pop(){
	int val,i;
	if(front==-1){
		return -1;
	}
	else if(rear==0){
		val=q[front];
	 	front=rear=-1;
		
		printf("%d is being popped and now queue is empty",val+1);
		for(i=0;i<=rear;i++){
		printf("%d ",q[i]+1);
		}printf("\n");
	
		return val;
	}
	else{
		val=q[front];
		{
			for(i=0;i<rear;i++){
				q[i]=q[i+1];
			}
		}
		rear--;
		
		printf("%d is being popped and remainig are... ",val+1);
		for(i=0;i<=rear;i++){
		printf("%d ",q[i]);
		}
		printf("\n");
		
		return val;
	}	
	
  }

  struct process{
	int at,bt,ct,status,ft,q;
  }rq[10];
  
  int dispatcher(int currentTime,int n){
  	int i;
  	for(i=0;i<n;i++){
  		if(rq[i].status!=1 && rq[i].at<=currentTime && rq[i].q!=1 && run!=-1 ){
  			push(i);
  			rq[i].q=1;
  		}
  	}
  	if(run!=-1){
  		push(run);
  		//run=-1;
  	}
  	
  	return pop();

  }

  void rr(int n){
  int time=0,tq,i=0;
  printf("Enter the time quantum:");
  scanf("%d",&tq);
  while(i<n){
  	int currentprocess=dispatcher(time,n);
  	if(currentprocess!=-1){
  		run=currentprocess;
  		if(rq[run].ct>tq){
  			rq[run].ct-=tq;
  			time=time+tq;
  		}
  		else{
  			time+=rq[run].ct;
			rq[run].ct=0;
  			rq[run].status=1;
  			rq[run].ft=time;
  			run=-1;
  			i++;
  		}
  	}
  	else{
  	time++;}
  }
  
  
  }
  
int main(){
	FILE *fptr;
	int n,i;
	fptr=fopen("rrinput.txt","r");
	fscanf(fptr,"%d",&n);
	for(i=0;i<n;i++){
		fscanf(fptr,"%d %d",&rq[i].at,&rq[i].bt);
		rq[i].status=0;
		rq[i].q=0;
		rq[i].ct=rq[i].bt;
	}
	fclose(fptr);
	rr(n);
	printf("\n\nPID\tAT\tBT\tCT\tSTATUS\tFT\n");
	for(int i=0;i<n;i++){
		printf("%d\t%d\t%d\t%d\t%d\t%d\n",i+1,rq[i].at,rq[i].bt,rq[i].ct,rq[i].status,rq[i].ft);
	}

}
