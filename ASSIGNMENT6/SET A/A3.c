#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *ptr;

    printf("Enter n: ");
    scanf("%d", &n);

    ptr = (int *) calloc(n, sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory not allocated\n");
        return 1;
    }

    printf("Values in allocated memory:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr);
    return 0;
}