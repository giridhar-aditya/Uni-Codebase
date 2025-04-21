#include<iostream>
using namespace std;
struct object{ double W,P,PW; };
int main(){
	int n; float tp=0;
	cout<<"Enter the number of elements :"; cin>>n;
	object obj[n],temp,selected[n],sample;
	for(int i=0;i<n;i++){
		cout<<"Enter Profit "<<i+1<<" :"; cin>>obj[i].P;
		cout<<"Enter Weight "<<i+1<<" :"; cin>>obj[i].W;
		obj[i].PW = obj[i].P / obj[i].W;
	}
	
	for(int j=0;j<n;j++){
		for(int i=0;i<n;i++){
			if(obj[i].PW < obj[i+1].PW){
				temp = obj[i]; 
				obj[i] = obj[i+1];
				obj[i+1] = temp;}
		}
	}
	int m=-1,C;
	cout<<"Enter the capacity of the Knapsack :"; cin>>C;
	for(int i=0;i<n;i++){
		if(C==0){cout<<"Capacity is Zero !!!"; break;}
		else{
			if(obj[i].W <= C){
				m++;
				selected[m]= obj[i];  C -= obj[i].W;}  
			else{
				sample = obj[i];
				sample.W = C;
				sample.P = (sample.W / obj[i].W)*obj[i].P;
				m++;
				selected[m] = sample; 
				}
		}
	}
	for(int i=0;i<m;i++){
		cout<<"Weight "<<i+1<<" :"<<selected[i].W<<" ";
		cout<<"Profit "<<i+1<<" :"<<selected[i].P<<"\n";
		tp += selected[i].P;
		
	}
	cout<<"The Total Profit :"<<tp;
}
	
	
