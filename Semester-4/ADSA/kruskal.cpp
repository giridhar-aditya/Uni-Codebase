#include<iostream>
using namespace std;
#define MAXN 20
struct vertex{
    int index,set;
};
struct edge{
    int u,v,cost; char color;
};
class graph{
    vertex *v;
    edge *e;
    int nv,ne;
    public:
    graph(int ee,int vv,int weight[][MAXN]){
        nv = vv; ne = ee;
        v[nv]; e[ne]; int k =0;
        for(int i=0;i<nv;i++){
            for(int j=0;j<i;j++){
                if(weight[i][j]){
                   e[k].u = i; e[k].v = j;
                   e[k].cost = weight[i][j]; 
                   e[k].color = 'w';
                   k++;
                }
            }
            v[i].index = i; v[i].set = i;
        }
    }
    void sort_edge(){
        edge temp; int c=0;
        for(int i=0;i<ne;i++){
            for(int j=0;j<ne;j++){
                if(e[j].cost > e[j+1].cost){
                    temp = e[j+1];
                    e[j+1] = e[j];
                    e[j] = temp;
                }
            }
        }
    }
    void kruskals(){
        sort_edge();
        int a,b;
        for(int i=0;i<ne;i++){
            if(v[e[i].u].set != v[e[i].v].set){
                e[i].color = 'b';
                a = v[e[i].u].set;
                b = v[e[i].v].set;
                for(int j=0;j<nv;j++){
                    if(v[j].set == a){
                        v[j].set = b;
                    }
                }
            }
        }
    }
    void display(){
    int minCost = 0;
    cout<<"\n\n\tMinimum Spanning Tree Edges:";
    for(int i = 0; i < ne; i++)
    {
        if(e[i].color == 'b')
        {
            cout<<"\n\t";
            cout<<e[i].u<<"--"<<e[i].v<<":Cost-"<<e[i].cost;
            minCost += e[i].cost;
        }
    }
    cout<<"\n\n\tMinimum Cost: "<<minCost;
    }

};
int main(){
    int nv = 9;
    int ne = 14;
    int b[][MAXN]={ {0,4,0,0,0,0,0,8,0},
                   {4,0,8,0,0,0,0,11,0},
                   {0,8,0,7,0,4,0,0,2},
                   {0,0,7,0,9,14,0,0,0},
                   {0,0,0,9,0,10,0,0,0},
                   {0,0,4,14,10,0,2,0,0},
                   {0,0,0,0,0,2,0,1,6},
                   {8,11,0,0,0,0,1,0,7},
                   {0,0,2,0,0,0,6,7,0}};
    graph g(ne, nv, b);
    g.kruskals();
    cout<<"\n\tKruskal's Result: ";
    g.display();
    return 0;
}