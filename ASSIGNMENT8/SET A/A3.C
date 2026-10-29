#include <stdio.h>
#include <ctype.h>
#include <string.h>

void toUpperStr(char *str) {
    while (*str != '\0') {
        *str = toupper(*str);
        str++;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    toUpperStr(str);
    printf("Uppercase string: %s\n", str);
    return 0;
}