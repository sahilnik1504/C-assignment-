#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Enter a character to search: ");
    scanf("%c", &ch);
    if (strchr(str, ch) != NULL) {
        printf("Character '%c' is present in the string.\n", ch);
    } else {
        printf("Character '%c' is not present in the string.\n", ch);
    }
    return 0;
}
