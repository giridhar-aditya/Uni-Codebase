#include<stdio.h>
#include<stdlib.h>

int *processors;

struct process{
int pid,at,bt,ft,status,sel;
}rq[10];
void dispatcher(int t,int n,int cpu){
for(int i=0;i<n;i++){
    //checking if the process is selected by the processor, if the process has arrived and have completed the process or not
    if(rq[i].status!=1 && rq[i].sel==0 && rq[i].at<=t){
        //finding the free processor
        for(int j=0;j<cpu;j++){
            if(processors[j]==-1){
                //assigning the selected process to the processor
                rq[i].sel=1;
                processors[j]=i;
                break;
            }    
        }
    }
}
}

void fcfsIO(int n,int cpu){
    //initializing the processors has free(-1)
    for(int i=0;i<cpu;i++){
        processors[i]=-1;
    }
    int time=0;
    int i=0;
    while(i<n){
        dispatcher(time,n,cpu);
        //looping through all the processors to complete their process
        for(int k=0;k<cpu;k++){
            //checking if the processor has process
            if(processors[k]!=-1){
                rq[processors[k]].bt--;
                //checking if the processor has completed the process
                if(rq[processors[k]].bt==0){
                    rq[processors[k]].status=1;    
                    rq[processors[k]].ft=time+1;
                    processors[k]=-1;
                    i++;                
                }
            }
        }
        time++;    
       
    }
}

int main(){
    //getting the input
    FILE *fptr;
    fptr=fopen("mpsInput.txt","r");
    int n,cpu;
    processors=(int*) malloc (cpu*sizeof(int));
    fscanf(fptr,"%d %d",&n,&cpu);
    for(int i=0;i<n;i++){
        fscanf(fptr,"%d %d",&rq[i].at,&rq[i].bt);
        rq[i].status=0;    
        rq[i].pid=i+1;
        rq[i].sel=0;
    }
    fclose(fptr);

    //calling the function
    fcfsIO(n,cpu);

    //displaying the output
    printf("PID\tAT\tBT\tFT\tSTATUS\n");
    for(int i=0;i<n;i++){
        printf("%d\t%d\t%d\t%d\t%d\n",rq[i].pid,rq[i].at,rq[i].bt,rq[i].ft,rq[i].status);
    }
}