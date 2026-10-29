#include <stdio.h>

int main() {
    int m[10][10], r[11][11], i, j, rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter matrix:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &m[i][j]);
    for (i = 0; i < rows; i++) {
        r[i][cols] = 0;
        for (j = 0; j < cols; j++)
            r[i][cols] += m[i][j];
    }
    for (j = 0; j < cols; j++) {
        r[rows][j] = 0;
        for (i = 0; i < rows; i++)
            r[rows][j] += m[i][j];
    }
    r[rows][cols] = 0;
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            r[rows][cols] += m[i][j];
    for (i = 0; i <= rows; i++) {
        for (j = 0; j <= cols; j++) {
            if (i < rows && j < cols)
                r[i][j] = m[i][j];
            printf("%d\t", r[i][j]);
        }
        printf("\n");
    }
    return 0;
}