#include<iostream>
using namespace std;
#define INF 9999
#define MAX 20
int n;
void floyd(int cost[][MAX],int d[][MAX],int p[][MAX]){
    int D[MAX][MAX][MAX],P[MAX][MAX][MAX];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            D[0][i][j] = cost[i][j];
            if(D[0][i][j]==0 || D[0][i][j] == INF){P[0][i][j] = -1;}
            else{P[0][i][j] = i;}
        }
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(D[k-1][i][k] + D[k-1][k][j] < D[k-1][i][j]){
                    D[k][i][j] = D[k-1][i][k] + D[k-1][k][j];
                    P[k][i][j] = P[k-1][k][j];
                }
                else{
                    D[k][i][j] = D[k-1][i][j];
                    P[k][i][j] = P[k-1][i][j];
                }
            }
        }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            d[i][j] = D[n][i][j];
            p[i][j] = P[n][i][j];
        }
    }
}
}
int main(){
    int cost[][MAX]={{0,0,0,0,0,0},
                    {0,0, 3, 8, INF,-4},
                    {0,INF,0, INF,1, 7},
                    {0,INF,4, 0, INF,INF},
                    {0,2, INF,-5, 0, INF},
                    {0,INF,INF,INF,6, 0}
                    };
    n=5; int d[MAX][MAX],p[MAX][MAX];
    floyd(cost,d,p);
    cout<<"DISTANCE MATRIX"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nPARENT MATRIX"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
}