#include <stdio.h>

int main() {
    int x, y, sum = 0;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    for (int i = x; i <= y; i++) {
        sum += i;
    }
    printf("Sum of integers between %d and %d is: %d\n", x, y, sum);
    return 0;
}