#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int i;

    arr = (int *) malloc(10 * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory not allocated\n");
        return 1;
    }

    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEntered integers are:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }

    free(arr);
    return 0;
}