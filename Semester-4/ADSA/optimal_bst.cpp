#include<iostream>
#define MAXN 20
using namespace std;
void OptimalBST(int Keys[], int p[], int q[], int c[][MAXN], int w[][MAXN], int r[][MAXN], int n) {
    int l, i, j, k, min, minK, sum;
    for (l = 1; l <= n + 1; l++) {
        for (i = 0; i <= (n + 1) - l; i++) {
            j = i + l - 1;
            if (i == j) {
                w[i][j] = q[i];
            } else {
                w[i][j] = w[i][j - 1] + q[j] + p[j];
            }
        }
    }
    for (l = 1; l <= n + 1; l++) {
        for (i = 0; i <= (n + 1) - l; i++) {
            j = i + l - 1;
            if (i == j) {
                c[i][j] = r[i][j] = 0;
            } else {
                min = 99999;
                minK = -1;
                for (k = i + 1; k <= j; k++) {
                    sum = c[i][k - 1] + c[k][j] + w[i][j];
                    if (sum < min) {
                        min = sum;
                        minK = k;
                    }
                }
                c[i][j] = min;
                r[i][j] = minK;
            }
        }
    }
}
int main() {
    int i, j;
    int Keys[MAXN] = {0, 10, 20, 30, 40};
    int p[MAXN] = {0, 3,3,1,1};
    int q[MAXN] = {2,3,1, 1, 1};
    int n = 4;
    int c[MAXN][MAXN];
    int w[MAXN][MAXN];
    int r[MAXN][MAXN];
    float totalProb = 0;    
    for (i = 0; i <= n; i++) {
        totalProb += p[i];
        totalProb += q[i];
    }
    OptimalBST(Keys, p, q, c, w, r, n);
    cout << "\n\nMatrix - w\n";
    for (i = 0; i <= n; i++) {
        for (j = i; j <= n; j++) {
            cout << "\t" << w[i][j];
        }
        cout << "\n";
    }

    cout << "\n\nMatrix - c\n";
    for (i = 0; i <= n; i++) {
        for (j = i; j <= n; j++) {
            cout << "\t" << c[i][j];
        }
        cout << "\n";
    }

    cout << "\n\nMatrix - r\n";
    for (i = 0; i <= n; i++) {
        for (j = i; j <= n; j++) {
            cout << "\t" << r[i][j];
        }
        cout << "\n";
    }

    cout << "\n\nOptimal Cost: " << (c[0][n] / totalProb);

    return 0;
}
