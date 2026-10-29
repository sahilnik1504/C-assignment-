#include <stdio.h>

int check(char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        return 1;
    else if (ch >= '0' && ch <= '9')
        return 2;
    else
        return 3;
}

int main() {
    char ch;
    int alpha = 0, digit = 0, special = 0;
    printf("Enter characters (press Ctrl+D to stop, Ctrl+Z on Windows):\n");
    while ((ch = getchar()) != EOF) {
        if (ch == '\n')
            continue;
        if (check(ch) == 1)
            alpha++;
        else if (check(ch) == 2)
            digit++;
        else
            special++;
    }
    printf("Alphabets = %d\n", alpha);
    printf("Digits = %d\n", digit);
    printf("Special symbols = %d\n", special);
    return 0;
}