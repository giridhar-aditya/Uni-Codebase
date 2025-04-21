#include <stdio.h>

void fibb(int fib[], int i) {
    static int a = 0, b = 1;
    if (i < 2) 
    return;
    fibb(fib, i-1);
    b += a;
    fib[i] = b;
    a = b - a;
}

void create_fib_arr(int n) {
    int fib[n+1], i;
    fib[0] = 0;
    fib[1] = 1;
    fibb(fib, n-1);
    printf("The %d elements of fibanocci series are as follows.\n", n);
    for (i = 0; i < n; i++)
        printf("%d\n", fib[i]);
}

void main () {
    int n;
    printf("Enter the number of elements (only positive numbers:): ");
    scanf("%d", &n);
    create_fib_arr(n);
}