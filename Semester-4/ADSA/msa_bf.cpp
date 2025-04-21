#include<iostream>
using namespace std;
int main(){
    int a[] = {-1, 3, -2, 5}, n = 4, i, j;
    int max = 0; 
    int range[] = {1, 1};
    for(i = 0; i < n; i++){
        int currentmax = 0;
        for(j = i; j < n; j++){
            currentmax += a[j];
            if(currentmax > max){
                max = currentmax; 
                range[0] = i; 
                range[1] = j;
            }
        }
    }
    cout<<"Maximum SubArray: "<<max<<"\n";    
    cout<<"Array: ";
    for(i = range[0]; i <= range[1]; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}