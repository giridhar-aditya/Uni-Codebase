#include<iostream>
using namespace std;
int c;
void merge(int a[], int low,int mid,int high){
	int i=0,j=0,k=low,temp[high],n1=mid-low+1,n2=high-mid;
	int L[n1],R[n2]; 
	for(int i = 0;i<n1;i++){L[i] = a[low+i]; c++;}
	for(int j = 0;j<n2;j++){R[j] = a[mid+1+j]; c++;} i=0; j=0;
	while(i<n1 && j<n2){c++;
		if(L[i] <= R[j]){a[k] = L[i]; i++; }
		else { a[k] = R[j]; j++;}
		k++;}
	while(i<n1){a[k] = L[i]; i++; k++; c++;}
	while(j<n2){a[k] = R[j]; j++; k++; c++;}
}
	
void mergesort(int a[],int low,int high){
	if(low<high){
	int mid = (low+high)/2;
	mergesort(a,low,mid);
	mergesort(a,mid+1,high);
	merge(a,low,mid,high);}
}	
int main(){
	int a[1000];
	for(int i=0;i<1000;i++){a[i]=rand()%1000;}
	mergesort(a,0,999);
	for(int i=0;i<5;i++){cout<<a[i]<<" ";}
	cout<<"Active Ops :"<<c;
}
