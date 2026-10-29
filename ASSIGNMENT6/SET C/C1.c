#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, i, j, sum;
    int **mat;

    printf("Enter number of rows (m): ");
    scanf("%d", &m);
    printf("Enter number of columns (n): ");
    scanf("%d", &n);

    mat = (int **) malloc(m * sizeof(int *));
    if (mat == NULL)
    {
        printf("Memory not allocated\n");
        return 1;
    }

    for (i = 0; i < m; i++)
    {
        mat[i] = (int *) malloc(n * sizeof(int));
        if (mat[i] == NULL)
        {
            printf("Memory not allocated\n");
            return 1;
        }
    }

    printf("Enter the elements of matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nColumn wise sum:\n");
    for (j = 0; j < n; j++)
    {
        sum = 0;
        for (i = 0; i < m; i++)
        {
            sum = sum + mat[i][j];
        }
        printf("Column %d sum = %d\n", j + 1, sum);
    }

    for (i = 0; i < m; i++)
    {
        free(mat[i]);
    }
    free(mat);

    return 0;
}