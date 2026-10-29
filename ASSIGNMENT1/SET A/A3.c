#include <stdio.h>

int main() {
    int x, n, result = 1;
    printf("Enter two integers (x and n): ");
    scanf("%d %d", &x, &n);
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    printf("%d to the power %d is: %d\n", x, n, result);
    return 0;
}