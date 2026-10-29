#include <stdio.h>

int main() {
    int m[10][10], n, i, j, sum = 0;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    printf("Enter matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &m[i][j]);
    for (i = 0; i < n; i++)
        sum = sum + m[i][i];
    printf("Sum of diagonal = %d\n", sum);
    return 0;
}