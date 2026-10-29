#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    int res = strcmp(str1, str2);
    if (res > 0) {
        strcat(str1, str2);
        printf("Concatenated String: %s\n", str1);
    } else if (res < 0) {
        char temp[200];
        strcpy(temp, str1);
        strcpy(str1, str2);
        strcat(str1, temp);
        printf("Concatenated String: %s\n", str1);
    } else {
        printf("Length of string: %lu\n", strlen(str1));
    }
    return 0;
}