#include <stdio.h>

int fib(int n) {
    if (n == 1 || n == 2)
        return 1;
    else
        return fib(n - 2) + fib(n - 1);
}

int main() {
    int n, i;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("%d ", fib(i));
    }
    printf("\n");
    return 0;
}