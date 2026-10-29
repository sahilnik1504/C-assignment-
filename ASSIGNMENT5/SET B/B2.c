#include <stdio.h>

void findMinMax(int *arr, int n, int *min, int *max)
{
    int i;

    *min = *arr;
    *max = *arr;

    for (i = 1; i < n; i++)
    {
        if (*(arr + i) < *min)
            *min = *(arr + i);
        if (*(arr + i) > *max)
            *max = *(arr + i);
    }
}

int main()
{
    int A[100];
    int n, i;
    int minimum, maximum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);

    findMinMax(A, n, &minimum, &maximum);

    printf("\nMinimum = %d\n", minimum);
    printf("Maximum = %d\n", maximum);

    return 0;
}