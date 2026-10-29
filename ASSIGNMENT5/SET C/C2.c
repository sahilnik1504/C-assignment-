#include <stdio.h>

int isPrime(int num)
{
    int i;

    if (num < 2)
        return 0;

    for (i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

void checkNumber(int num, int *flag1, int *flag2, int *flag3)
{
    *flag1 = 0;
    *flag2 = 0;
    *flag3 = 0;

    if (num % 2 == 0)
        *flag1 = 1;

    if (isPrime(num))
        *flag2 = 1;

    if (num % 3 == 0 || num % 7 == 0)
        *flag3 = 1;
}

int main()
{
    int num;
    int flag1, flag2, flag3;

    printf("Enter an integer: ");
    scanf("%d", &num);

    checkNumber(num, &flag1, &flag2, &flag3);

    printf("\nResults for %d:\n", num);
    printf("Even?                 %s\n", flag1 ? "Yes" : "No");
    printf("Prime?                %s\n", flag2 ? "Yes" : "No");
    printf("Divisible by 3 or 7?  %s\n", flag3 ? "Yes" : "No");

    return 0;
}