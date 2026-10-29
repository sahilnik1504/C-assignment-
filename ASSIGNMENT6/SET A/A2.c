#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *p;

    printf("Enter how many integers: ");
    scanf("%d", &n);

    p = (int *) malloc(n * sizeof(int));
    if (p == NULL)
    {
        printf("Memory not allocated\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }

    printf("\nIntegers in reverse order:\n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", p[i]);
    }
    printf("\n");

    free(p);
    return 0;
}