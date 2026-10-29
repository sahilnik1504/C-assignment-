/*
Menu driven program until the user selects quit.
Uses standard library functions from math.h.
1. Sine (angle in degrees)
2. Cosine
3. Log
4. Power
5. Square root
6. Quit
*/

#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main() {
    int choice;
    double x, y, result;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Sine\n");
        printf("2. Cosine\n");
        printf("3. Log\n");
        printf("4. Power\n");
        printf("5. Square root\n");
        printf("6. Quit\n");
        printf("Enter your choice: ");
        fflush(stdout);
        scanf(" %d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the angle in degrees: ");
                fflush(stdout);
                scanf(" %lf", &x);
                result = sin(x * PI / 180.0);
                printf("Sine of %.2lf degrees is %.4lf\n", x, result);
                break;

            case 2:
                printf("Enter the angle in degrees: ");
                fflush(stdout);
                scanf(" %lf", &x);
                result = cos(x * PI / 180.0);
                printf("Cosine of %.2lf degrees is %.4lf\n", x, result);
                break;

            case 3:
                printf("Enter the value of x: ");
                fflush(stdout);
                scanf(" %lf", &x);
                if (x <= 0) {
                    printf("Error: log is undefined for non-positive values.\n");
                } else {
                    result = log(x);
                    printf("Log of %.2lf is %.4lf\n", x, result);
                }
                break;

            case 4:
                printf("Enter the base: ");
                fflush(stdout);
                scanf(" %lf", &x);
                printf("Enter the exponent: ");
                fflush(stdout);
                scanf(" %lf", &y);
                result = pow(x, y);
                printf("%.2lf raised to the power %.2lf is %.4lf\n", x, y, result);
                break;

            case 5:
                printf("Enter the value of x: ");
                fflush(stdout);
                scanf(" %lf", &x);
                if (x < 0) {
                    printf("Error: square root of a negative number is undefined here.\n");
                } else {
                    result = sqrt(x);
                    printf("Square root of %.2lf is %.4lf\n", x, result);
                }
                break;

            case 6:
                printf("Quitting...\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}