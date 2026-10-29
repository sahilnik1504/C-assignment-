#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        if (freq[ch] != 0) {
            printf("Character %c occurs %d times\n", ch, freq[ch]);
            freq[ch] = 0;
        }
    }
    return 0;
}