#include <stdio.h>

int findMin(int *arr, int n)
{
    int i;
    int min = *arr;

    for (i = 1; i < n; i++)
    {
        if (*(arr + i) < min)
            min = *(arr + i);
    }
    return min;
}

int main()
{
    int n, i;
    int arr[100];
    int *p;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (p = arr; p < arr + n; p++)
        scanf("%d", p);

    printf("Minimum value = %d\n", findMin(arr, n));

    return 0;
}