#include<iostream>
using namespace std;
struct jobs{ int P,D; };
int main(){
	int n,m=0; cout<<"Enter the number of jobs :"; cin>>n;
	jobs job[n],temp;
	for(int i=0;i<n;i++){
		cout<<"Enter Profit "<<i+1<<" :"; cin>>job[i].P;
		cout<<"Enter Deadline "<<i+1<<" :"; cin>>job[i].D;
	}
	for(int i=0;i<n;i++){if(m<=job[i].D){m = job[i].D;}} jobs slots[m];
	for(int i=0;i<m;i++){slots[i].P =0; slots[i].D =0;}
	cout<<"Maximum Slots Available :"<<m<<"\n";
	for(int j=0;j<n;j++){
		for(int i=0;i<n-1;i++){
			if(job[i].P < job[i+1].P){
				temp = job[i]; 
				job[i] = job[i+1];
				job[i+1] = temp;}
		}
	}
	for(int i=0;i<n;i++){
		for(int j = job[i].D;j>0;j--){
			if(slots[j-1].D==0){slots[j-1] = job[i]; break;}}
	}
	for(int i=0;i<m;i++){
		cout<<"Slot : "<<i+1<<" Profit :"<<slots[i].P<<"\n";}
}
		
	
