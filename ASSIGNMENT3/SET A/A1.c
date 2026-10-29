/*MAXIMUM OF THREE NUMBERS*/

#include <stdio.h>

int Max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int a, b, c, m;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    m = Max(a, b);
    m = Max(m, c);
    printf("Maximum = %d\n", m);
    return 0;
}