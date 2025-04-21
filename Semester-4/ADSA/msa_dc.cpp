#include<iostream>
using namespace std;
struct process {int s,e,m;};
process mcsa(int a[],int l,int m,int h){
    int lmax = m,lsum=a[m],max=a[m];
    for(int i= m-1;i>=l;i--){
        max += a[i]; 
        if(max>lsum){lsum = max; lmax = i;}
    }
    int rmax = m+1,rsum=a[m+1]; max=a[m+1];
    for(int i=m+2;i<=h;i++){max += a[i];
    if(max > rsum){rsum = max; rmax = i;}}
    process temp; temp.s = lmax; temp.e = rmax; temp.m = lsum+rsum;
    return temp;
}
process msa(int a[],int l,int h){
    process temp,s1,s2,s3;
    if(l == h){
    temp.s = l; temp.e=h; temp.m = a[l];
    return temp;} 
    int m = (l+h)/2;
    s1 = msa(a,l,m);
    s2 = msa(a,m+1,h);
    s3 = mcsa(a,l,m,h);
    temp = s1; if(s2.m>temp.m){temp = s2;} if(s3.m>temp.m){temp = s3;}
    return temp;    
}
int main(){
    int a[]={-1,3,-2,5},n=4;
    process r = msa(a,0,n-1);
    cout<<"Start from "<<r.s<<" to "<<r.e<<"\nAnswer : "<<r.m;
}