#include <iostream>

using namespace std;

void SumOfSub(int weights[], int s, int k, int r, int m, int x[]) {
    x[k] = 1;
    if (s + weights[k] == m) {
        for (int i = 0; i <= k; ++i) {
            if (x[i] == 1) {
                cout << weights[i] << " ";
            }
        }
        cout << endl;
    } else if (s + weights[k] + weights[k + 1] <= m) {
        SumOfSub(weights, s + weights[k], k + 1, r - weights[k], m, x);
    }
    if ((s + r - weights[k] >= m) && (s + weights[k + 1] <= m)) {
        x[k] = 0;
        SumOfSub(weights, s, k + 1, r - weights[k], m, x);
    }
}

int main() {
    int weights[] = {1,2,3,4,5,6};
    int m = 10;
    int r = 0,x[6];
    for (int w : weights) {
        r += w;
    }
    SumOfSub(weights, 0, 0, r, m, x);
    return 0;
}
