/*nested loops*/

#include <stdio.h>

int main() {
    int a[100], n, i, large, small;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    large = a[0];
    small = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > large)
            large = a[i];
        if (a[i] < small)
            small = a[i];
    }
    printf("Largest = %d\n", large);
    printf("Smallest = %d\n", small);
    return 0;
}