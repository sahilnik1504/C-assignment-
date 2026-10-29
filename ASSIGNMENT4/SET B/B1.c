#include <stdio.h>

int main() {
    int a[100], n, i, sum = 0;
    float avg;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    avg = (float)sum / n;
    printf("Average = %.2f\n", avg);
    return 0;
}