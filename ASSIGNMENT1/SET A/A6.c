#include <stdio.h>

int main() {
    char c;
    int n;
    printf("Enter a character and an integer: ");
    scanf(" %c %d", &c, &n);
    printf("Next %d characters after '%c' are: ", n, c);
    for (int i = 1; i <= n; i++) {
        printf("%c ", c + i);
    }
    printf("\n");
    return 0;
}