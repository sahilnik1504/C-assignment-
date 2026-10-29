#include <stdio.h>
#include <string.h>

void copyStr(char *dest, char *src) {
    while ((*dest++ = *src++));
}

void concatStr(char *dest, char *src) {
    while (*dest != '\0') dest++;
    while ((*dest++ = *src++));
}

int lengthStr(char *str) {
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

void reverseStr(char *str) {
    int len = lengthStr(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

int main() {
    int choice;
    char str1[100], str2[100];
    do {
        printf("\n1. Copy\n2. Concatenate\n3. Length\n4. Reverse\n5. Exit\nEnter choice: ");
        scanf("%d", &choice);
        getchar();
        switch (choice) {
            case 1:
                printf("Enter source string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                copyStr(str2, str1);
                printf("Copied string: %s\n", str2);
                break;
            case 2:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';
                concatStr(str1, str2);
                printf("Concatenated string: %s\n", str1);
                break;
            case 3:
                printf("Enter string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Length: %d\n", lengthStr(str1));
                break;
            case 4:
                printf("Enter string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                reverseStr(str1);
                printf("Reversed string: %s\n", str1);
                break;
            case 5:
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 5);
    return 0;
}
