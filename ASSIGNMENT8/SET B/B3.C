#include <stdio.h>
#include <string.h>

int countOccurrences(char *str, char ch) {
    int count = 0;
    while (*str != '\0') {
        if (*str == ch) {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[100], ch;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Enter character to search: ");
    scanf("%c", &ch);
    int count = countOccurrences(str, ch);
    printf("Character occurs %d times.\n", count);
    return 0;
}