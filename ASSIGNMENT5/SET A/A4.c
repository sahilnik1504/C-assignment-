#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];
    int *p;

    printf("How many elements? ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (p = arr; p < arr + n; p++)
    {
        scanf("%d", p);
    }

    printf("\nArray in reverse order:\n");
    p = arr + n - 1;
    for (i = 0; i < n; i++)
    {
        printf("%d ", *p);
        p--;
    }
    printf("\n");

    return 0;
}