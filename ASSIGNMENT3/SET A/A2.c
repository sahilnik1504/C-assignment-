/*PRIME NUMBER CHECKER*/

#include <stdio.h>

int isPrime(int n) {
    int i;
    if (n < 2)
        return 0;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;
    char ch;
    do {
        printf("Enter a number: ");
        scanf("%d", &n);
        if (isPrime(n))
            printf("%d is prime\n", n);
        else
            printf("%d is not prime\n", n);
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &ch);
    } while (ch == 'y' || ch == 'Y');
    return 0;
}