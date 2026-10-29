#include <stdio.h>

struct Employee {
    char name[50];
    char street[50];
    char city[50];
};

int main() {
    struct Employee emp[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter Name, Street, and City for employee %d: ", i + 1);
        scanf("%s %s %s", emp[i].name, emp[i].street, emp[i].city);
    }
    printf("\n--- Employee Records ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s | Street: %s | City: %s\n", emp[i].name, emp[i].street, emp[i].city);
    }
    return 0;
}