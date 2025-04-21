#include<iostream>
#include<cstdlib>
using namespace std;
void merge(int a[], int low,int mid,int high){
	int i=0,j=0,k=low,temp[high],n1=mid-low+1,n2=high-mid;
	int L[n1],R[n2]; 
	for(int i = 0;i<n1;i++){L[i] = a[low+i];}
	for(int j = 0;j<n2;j++){R[j] = a[mid+1+j];} i=0;
	while(i<n1 && j<n2){
		if(L[i] <= R[j]){a[k] = L[i]; i++; }
		else { a[k] = R[j]; j++;}
		k++;}
	while(i<n1){a[k] = L[i]; i++; k++;}
	while(j<n2){a[k] = R[j]; j++; k++;}
}
	
void mergesort(int a[],int low,int high){
	if(low<high){
	int mid = (low+high)/2;
	mergesort(a,low,mid);
	mergesort(a,mid+1,high);
	merge(a,low,mid,high);}
}	
int main(){
	int n=20;
	int a[n],temp;
	for(int i=0;i<n;i++){a[i] = rand() % n;}
	mergesort(a,0,n-1);
	for(int i=0;i<n;i++){cout<<"\n"<<a[i]<<" ";}
}
