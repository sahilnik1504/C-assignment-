#include <stdio.h>
#include <string.h>

int main() {
    char source[100], destination[100];
    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);
    source[strcspn(source, "\n")] = '\0';
    strcpy(destination, source);
    printf("Copied String: %s\n", destination);
    printf("Length of Copied String: %lu\n", strlen(destination));
    return 0;
}