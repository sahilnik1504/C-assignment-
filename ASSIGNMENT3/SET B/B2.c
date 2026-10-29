#include <stdio.h>

void nextChars(char ch, int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%c ", ch + i);
    }
    printf("\n");
}

int main() {
    char ch;
    int n;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    printf("Enter n: ");
    scanf("%d", &n);
    nextChars(ch, n);
    return 0;
}