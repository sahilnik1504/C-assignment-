#include <stdio.h>

struct Date {
    int dd, mm, yyyy;
};

struct Employee {
    int id;
    char name[50];
    struct Date bdate;
};

int main() {
    int n, searchMonth;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct Employee emp[n];
    for (int i = 0; i < n; i++) {
        printf("Enter ID, Name, and Birthdate (dd mm yyyy) for employee %d: ", i + 1);
        scanf("%d %s %d %d %d", &emp[i].id, emp[i].name, &emp[i].bdate.dd, &emp[i].bdate.mm, &emp[i].bdate.yyyy);
    }
    printf("Enter month to search: ");
    scanf("%d", &searchMonth);
    printf("\n--- Employees Having Birthdate in Month %d ---\n", searchMonth);
    for (int i = 0; i < n; i++) {
        if (emp[i].bdate.mm == searchMonth) {
            printf("ID: %d | Name: %s | Birthdate: %02d/%02d/%d\n", emp[i].id, emp[i].name, emp[i].bdate.dd, emp[i].bdate.mm, emp[i].bdate.yyyy);
        }
    }
    return 0;
}