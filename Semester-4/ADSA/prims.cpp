#include<iostream>
#include<vector>
using namespace std;
#define MAX 20
struct vertex{
    vector<int> adj_list;
    int index,parent,dist;
    char color;
};
class graph{
    vertex *v;
    int size;
    public:
    graph(int n){
        size = n;
        v = new vertex[n];
        for(int i=0;i<n;i++){
            v[i].index = i;
            v[i].color = 'w';
            v[i].parent = -1;
            v[i].dist = 9999;
        }
    }
    void add_edge(int from,int to){
        v[from].adj_list.push_back(to);
    }
    bool extract_min(int &c){
        int min = 9999;
        for(int i=0;i<size;i++){
            if(v[i].color=='w' && v[i].dist < min){min=v[i].dist; c = i;}
        }
        if(min != 9999){return true;}
        else{return false;}
    }
    void prims(int weight[][MAX],int s){
        v[s].parent = -1; v[s].dist = 0;
        int u,c;
        while(extract_min(u)){
            for(int p = 0;p < v[u].adj_list.size();p++){
                    c = v[u].adj_list[p];
                    if(v[c].color == 'w' && weight[u][c] < v[c].dist){
                        v[c].parent = u;
                        v[c].dist = weight[u][c];
                    }
            }
            v[u].color = 'b';
        }
    }
    void display(){
        int minCost = 0;
    cout<<"\n\n\tMinimum Spanning Tree Edges: ";
    for(int i = 0; i < size; i++)
    {
        if(v[i].parent == -1)
            continue;
        cout<<"\n\t";
        cout<<v[i].parent<<"--"<<v[i].dist<<":Cost-"<<v[i].dist;
        minCost += v[i].dist; // Accumulate the minimum cost
    }
    cout<<"\n\n\tMinimum Cost: "<<minCost;
    }
};
int main(){
    int b[][MAX]={ {0,4,0,0,0,0,0,8,0},
                   {4,0,8,0,0,0,0,11,0},
                   {0,8,0,7,0,4,0,0,2},
                   {0,0,7,0,9,14,0,0,0},
                   {0,0,0,9,0,10,0,0,0},
                   {0,0,4,14,10,0,2,0,0},
                   {0,0,0,0,0,2,0,1,6},
                   {8,11,0,0,0,0,1,0,7},
                   {0,0,2,0,0,0,6,7,0}};
    int n=9,i,j; graph g(n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(b[i][j]!=0){ g.add_edge(i,j);}
        }
    }
    g.prims(b,0);
    cout<<"Prims Result is Found";
    g.display();
}