#include <stdio.h>
#include <math.h>

int main() {
    float x, sum = 0;
    int n, i;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += pow(x, i);
    }
    printf("Sum of the series is: %f\n", sum);
    return 0;
}