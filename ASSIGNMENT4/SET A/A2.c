#include <stdio.h>

int main() {
    int num, digit, hit[26] = {0};
    printf("Enter numbers (1 to 25), -1 to stop:\n");
    scanf("%d", &num);
    while (num != -1) {
        if (num >= 1 && num <= 25)
            hit[num]++;
        else
            printf("Out of range, ignored\n");
        scanf("%d", &num);
    }
    printf("Enter a digit (1 to 25): ");
    scanf("%d", &digit);
    if (digit >= 1 && digit <= 25)
        printf("%d was entered %d times\n", digit, hit[digit]);
    else
        printf("Invalid digit\n");
    return 0;
}