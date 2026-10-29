#include <stdio.h>

struct Date {
    int dd, mm, yyyy;
};

struct Employee {
    int id;
    char name[50];
    struct Date jdate;
};

int main() {
    int n, searchMonth;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct Employee emp[n];
    for (int i = 0; i < n; i++) {
        printf("Enter ID, Name, and Joining Date (dd mm yyyy) for employee %d: ", i + 1);
        scanf("%d %s %d %d %d", &emp[i].id, emp[i].name, &emp[i].jdate.dd, &emp[i].jdate.mm, &emp[i].jdate.yyyy);
    }
    printf("Enter month to search: ");
    scanf("%d", &searchMonth);
    printf("\n--- Employees Joining in Month %d ---\n", searchMonth);
    for (int i = 0; i < n; i++) {
        if (emp[i].jdate.mm == searchMonth) {
            printf("ID: %d | Name: %s | Date: %02d/%02d/%d\n", emp[i].id, emp[i].name, emp[i].jdate.dd, emp[i].jdate.mm, emp[i].jdate.yyyy);
        }
    }
    return 0;
}