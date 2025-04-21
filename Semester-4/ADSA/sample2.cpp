#include<iostream>
#define maxm 10
#define maxn 10
using namespace std;

bool issafe(int board[maxn][maxn], int r, int c, int n){
    int i, j;
    for(i = 0; i < r; i++){
        if(board[i][c]) return false;
    }
    for(i = r, j = c; i >= 0 && j >= 0; i--, j--){
        if(board[i][j]) return false;
    }
    for(i = r, j = c; i >= 0 && j < n; i--, j++){
        if(board[i][j]) return false;
    }
    return true;
}

bool PlaceQueen(int n, int &m, int board[maxn][maxn], int solutions[maxm][maxn], int r){
    if(r == n){
        int k = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(board[i][j] == 1) solutions[m][k++] = j + 1;
            }
        }
        m++;
        return true;
    }
    bool res = false;
    for(int c = 0; c < n; c++){
        if(issafe(board, r, c, n)){
            board[r][c] = 1;
            res = PlaceQueen(n, m, board, solutions, r + 1) || res;
            board[r][c] = 0;
        }
    }
    return res;
}

bool nQueen(int n, int &m, int solutions[maxm][maxn]){
    int board[maxn][maxn];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            board[i][j] = 0;
        }
    }
    return PlaceQueen(n, m, board, solutions, 0);
}

int main(){
    int n, m = 0;
    cout << "Enter the Number of Queens: "; 
    cin >> n;
    int solutions[maxm][maxn];
    if(!nQueen(n, m, solutions)){
        cout << "No Result Found";
    }
    else{
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cout << solutions[i][j] << " ";
            }
            cout << "\n";
        }
    }
}
