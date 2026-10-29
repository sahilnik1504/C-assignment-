#include <stdio.h>

int isEven(int n) {
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}

int main() {
    int n, i, num;
    printf("How many numbers: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if (isEven(num))
            printf("%d is even\n", num);
        else
            printf("%d is odd\n", num);
    }
    return 0;
}