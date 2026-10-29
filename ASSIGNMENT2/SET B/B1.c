#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main() {
    char ch;
    int choice;

    printf("Enter a character: ");
    scanf(" %c", &ch);
    while (getchar() != '\n');

    do {
        printf("\n========== MENU ==========\n");
        printf("1. Check if it is an alphabet\n");
        printf("2. Check if it is a digit & find its cube\n");
        printf("3. Check lowercase, display next character in uppercase\n");
        printf("4. Check uppercase, display next character in lowercase\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid choice! Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }
        while (getchar() != '\n');

        switch (choice) {
            case 1:
                if (isalpha(ch)) {
                    printf("%c is an alphabet.\n", ch);
                } else {
                    printf("%c is NOT an alphabet.\n", ch);
                }
                break;

            case 2:
                if (isdigit(ch)) {
                    int digit = ch - '0';
                    double cube = pow(digit, 3);
                    printf("%c is a digit. Its cube is %.0f\n", ch, cube);
                } else {
                    printf("%c is NOT a digit.\n", ch);
                }
                break;

            case 3:
                if (islower(ch)) {
                    char next;
                    if (ch == 'z') {
                        next = 'a';
                    } else {
                        next = ch + 1;
                    }
                    printf("Next character in uppercase: %c\n", toupper(next));
                } else {
                    printf("%c is NOT a lowercase alphabet.\n", ch);
                }
                break;

            case 4:
                if (isupper(ch)) {
                    char next;
                    if (ch == 'Z') {
                        next = 'A';
                    } else {
                        next = ch + 1;
                    }
                    printf("Next character in lowercase: %c\n", tolower(next));
                } else {
                    printf("%c is NOT an uppercase alphabet.\n", ch);
                }
                break;

            case 5:
                printf("Exiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}