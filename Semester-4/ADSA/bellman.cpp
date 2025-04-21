#include<iostream>
#include<vector>
#define MAXN 20
using namespace std;
struct vertex{
    vector<int> adjlist;
    int index,parent,dist;
};
class graph{
    vertex *v; int size;
    public:
    graph(int n){
        size = n; v = new vertex[n];
        for(int i=0;i<n;i++){
            v[i].index = i;
            v[i].parent = -1;
            v[i].dist = 9999;
        }
    }
    void add_edge(int from,int to){v[from].adjlist.push_back(to);}
    void relax(int u,int V,int w[][MAXN]){
        if(v[u].dist + w[u][V] < v[V].dist){
            v[V].parent = u; v[V].dist = v[u].dist + w[u][V];
        }
    }
    bool bellman(int w[][MAXN],int s){
        v[s].dist = 0; v[s].parent = -1;
        for(int i = 0;i<size-1;i++){
            for(int u=0;u<size;u++){
                for(int p=0;p<v[u].adjlist.size();p++){
                    int c = v[u].adjlist[p];
                    if(w[u][c]!=0){relax(u,c,w);}
                }
            }            
        } 
        for(int u=0;u<size;u++){
            for(int p=0;p<v[u].adjlist.size();p++){
                int c = v[u].adjlist[p];
                if(v[u].dist+w[u][c] < v[c].dist){return false;}
            }
        }
        return true;
    }
    void display(){
        int mincost=0;
        cout<<"\n"<<"Vertex | "<<"Parent |"<<"Distance | ";
        cout<<"\n********************************************";
        for(int i=0;i<size;i++){
            cout<<"\n";
            if(v[i].parent==-1)
            cout<<v[i].index<<" |"<<"Source"<<" | "<<v[i].dist<<" | ";
            else
            cout<<v[i].index<<" |"<<v[i].parent<<" | "<<v[i].dist<<" | ";
        }
        cout<<"\n********************************************";
    }
};
int main(){
    int b[MAXN][MAXN]={{0,6,0,0,7},
                    {0,0,5,-4,8},
                    {0,-2,0,0,0},
                    {2,0,7,0,0},
                    {0,0,-3,9,0} };
    int n=5; graph g(n);
    for(int i=0;i<n;i++){for(int j=0;j<n;j++){
        if(b[i][j]!=0){g.add_edge(i,j);}
    }}
    bool res = g.bellman(b,0);
    if(res){
    g.display();}
    else{cout<<"Negative Weight Cycle is Found";}
}