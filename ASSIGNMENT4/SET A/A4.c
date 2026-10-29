#include <stdio.h>

void accept(int m[][10], int r, int c) {
    int i, j;
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &m[i][j]);
}

void add(int a[][10], int b[][10], int s[][10], int r, int c) {
    int i, j;
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            s[i][j] = a[i][j] + b[i][j];
}

void display(int m[][10], int r, int c) {
    int i, j;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++)
            printf("%d\t", m[i][j]);
        printf("\n");
    }
}

int main() {
    int a[10][10], b[10][10], s[10][10], r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter first matrix:\n");
    accept(a, r, c);
    printf("Enter second matrix:\n");
    accept(b, r, c);
    add(a, b, s, r, c);
    printf("First matrix:\n");
    display(a, r, c);
    printf("Second matrix:\n");
    display(b, r, c);
    printf("Sum:\n");
    display(s, r, c);
    return 0;
}