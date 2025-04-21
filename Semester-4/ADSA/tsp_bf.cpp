#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int S = 0;
    int cost[5][5] ={{9999,20,30,10,11},
                    {15,9999,16,4,2},
                    {3,5,9999,2,4},
                    {19,6,18,9999,3},
                    {16,4,7,16,9999}};
    int vertex[] = {1,2,3,4};
    int minpath = 9999;
    while (next_permutation(vertex,vertex+4)){
        int currentpath = 0;
        int K = S;
        for(int i=0;i<4;i++){
            currentpath += cost[K][vertex[i]]; K = vertex[i];
        }
        currentpath += cost[K][S];
        minpath = min(currentpath,minpath);
        }
    cout<<"Minimum Path is :"<<minpath;
}