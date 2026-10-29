#include <stdio.h>

int main()
{
    int a, b;
    int *p, *q;
    int sum, diff, mul, quo, rem;

    p = &a;
    q = &b;

    printf("Enter first integer: ");
    scanf("%d", p);
    printf("Enter second integer: ");
    scanf("%d", q);

    sum = *p + *q;
    diff = *p - *q;
    mul = *p * *q;

    printf("\nSum        = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product    = %d\n", mul);

    if (*q != 0)
    {
        quo = *p / *q;
        rem = *p % *q;
        printf("Quotient   = %d\n", quo);
        printf("Remainder  = %d\n", rem);
    }
    else
    {
        printf("Division not possible because second number is 0\n");
    }

    return 0;
}