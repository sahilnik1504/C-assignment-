#include <stdio.h>

int main()
{
    int x, y;
    int *px, *py;

    px = &x;
    py = &y;

    printf("Enter two integers: ");
    scanf("%d %d", px, py);

    if (*px > *py)
        printf("Maximum = %d\n", *px);
    else
        printf("Maximum = %d\n", *py);

    return 0;
}