#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, max;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int *) malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory not allocated\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    printf("Maximum = %d\n", max);

    free(arr);
    return 0;
}