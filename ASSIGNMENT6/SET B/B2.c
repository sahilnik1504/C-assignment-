#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, count = 0;
    int sum = 0;
    float avg;
    int *a, *b;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    a = (int *) malloc(n * sizeof(int));
    if (a == NULL)
    {
        printf("Memory not allocated\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] != 0)
            count++;
    }

    if (count == 0)
    {
        printf("No non-zero elements found\n");
        free(a);
        return 0;
    }

    b = (int *) malloc(count * sizeof(int));
    if (b == NULL)
    {
        printf("Memory not allocated\n");
        free(a);
        return 1;
    }

    j = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            b[j] = a[i];
            j++;
        }
    }

    for (i = 0; i < count; i++)
    {
        sum = sum + b[i];
    }
    avg = (float) sum / count;

    printf("\nNon-zero elements: ");
    for (i = 0; i < count; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\nSum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    free(a);
    free(b);
    return 0;
}