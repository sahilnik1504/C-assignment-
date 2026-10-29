/*display multiplication table of a number. multiplication tables of 2 to 9 having 10 multiples each.tabular form*/
#include <stdio.h>
int main() {
    int i, j;
    printf("Multiplication tables from 2 to 9:\n");
    for (i = 2; i <= 9; i++) {
        printf("Table of %d:\n", i);
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %-4d\n", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}