#include <stdio.h>

int main()
{
    int num;
    int *ptr;

    ptr = &num;

    printf("Enter an integer: ");
    scanf("%d", ptr);

    if (*ptr % 2 == 0)
        printf("%d is EVEN\n", *ptr);
    else
        printf("%d is ODD\n", *ptr);

    return 0;
}