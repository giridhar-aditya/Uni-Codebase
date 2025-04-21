#include<stdio.h>
#include<stdlib.h>
int ref_count,frame_count;
int* ref_string;
int fifo_pr(){
    int pf=0,head=0,i,j;
    int *frames = calloc(sizeof(int),frame_count);
    for(i=0;i<frame_count;i++){frames[i]=0;}
    for(i=0;i<ref_count;i++){
        for(j=0;j<frame_count;j++){
            if(frames[j]==ref_string[i]){
                break;
            }
        }
        if(j==frame_count){
            pf++; frames[head] = ref_string[i];
            head = (head+1)%frame_count;
        }
    }
    free(frames);
    return pf;
}
int lru_pr(){
    int pf=0,lru,i,j;
    int *frames = calloc(sizeof(int),frame_count);
    int *page_hit = calloc(sizeof(int),frame_count);
    for(i=0;i<frame_count;i++){frames[i]=-1; page_hit[i]=0;}
    for(i=0;i<ref_count;i++){ lru = -1;
        for(j=0;j<frame_count;j++){
            if(lru<0 || page_hit[j] < page_hit[lru]){ lru = j;}
            if(frames[j]==ref_string[i]){page_hit[j]++; break;}
        }
        if(j==frame_count){
            pf++;
            frames[lru] = ref_string[i];
            page_hit[lru] = 1;
        }
    }
    free(frames); free(page_hit);
    return pf;
}
int opr_pr(){
    int pf=0, f_frame , f_hit,i,j,k;
    int *frames = calloc(sizeof(int),frame_count);
    for(i=0;i<frame_count;i++){frames[i]=-1;}
    for(i=0;i<ref_count;i++){
        for(j=0;j<frame_count;j++){
            if(frames[j]==ref_string[i]){break;}
        }
        if(j==frame_count){
                pf++;
                f_frame = -1 ; f_hit =-1;
                for(k=0;k<frame_count;k++){
                    for(j=i+1;j<ref_count;j++){
                        if(frames[k] == ref_string[j]){
                            if(j > f_hit){f_hit = j; f_frame = k;}
                            break;
                        }
                    }
                    if(j>=ref_count){f_frame = k; f_hit = j; break;}
                }
                frames[f_frame] = ref_string[i];
        }
    }
    free(frames);
    return pf;
}
int main(){
    printf("Enter the Total Reference String Count :"); scanf("%d",&ref_count);
    ref_string = calloc(sizeof(int),ref_count); 
    printf("Enter the Reference String :"); 
    for(int i=0;i<ref_count;i++){scanf("%d",&ref_string[i]);}
    printf("Enter the Number of Frames :"); scanf("%d",&frame_count);
    printf("\n\n\n");
    printf("FIFO : %d",fifo_pr());
    printf("\nLRU : %d",lru_pr());
    printf("\nOPR : %d ",opr_pr());
    free(ref_string);
}