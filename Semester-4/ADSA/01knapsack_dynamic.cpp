#include<iostream>
using namespace std;

void zeroOneKnapsack(int w[], int p[], int c, int n)
{
    int m[n+1][c+1];
    
    for(int j = 0; j <= c; j++)
    {
   	 m[0][j] = 0;
    }

    for(int i = 0; i <= n; i++)
    {
    m[i][0] = 0;
    }

    for(int i = 1; i <= n; i++)
    {
   	 for(int j = 1; j < w[i-1]; j++)
   	 {
   		 m[i][j] = m[i-1][j];
   	 }
   	 for(int j = w[i-1]; j <= c; j++)
   	 {
   		 if(m[i-1][j] > (p[i-1] + m[i-1][j-w[i-1]]))
   		 {
   			 m[i][j] = m[i-1][j];
   		 }
   		 else
   		 {
   			 m[i][j] = p[i-1] + m[i-1][j-w[i-1]];
   		 }
   	 }
    }

    for(int i = 0; i <= n; i++)
    {
   	 for(int j = 0; j <= c; j++)
   	 {
   		 cout<<"\t"<<m[i][j];
   	 }
   	 cout<<endl;
    }
    cout<<"Maximum profit: "<<m[n][c]<<endl;
}

int main()
{
    int n,c;
    int w[4];
    int p[4];

    cout<<"Enter the number of objects: ";
    cin>>n;
    
    for(int i = 0; i < n; i++)
    {
   	 cout<<"Enter object "<<i+1<<" profit: ";
   	 cin>>p[i];
   	 cout<<"Enter object "<<i+1<<" weight: ";
   	 cin>>w[i];
    }

    cout<<"Enter the knapsack capacity: ";
    cin>>c;

    zeroOneKnapsack(w,p,c,n);
    return 0;
}

