#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex add(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

struct Complex subtract(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}


struct Complex multiply(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = (a.real * b.real) - (a.imag * b.imag);
    result.imag = (a.real * b.imag) + (a.imag * b.real);
    return result;
}


void display(struct Complex c) {
    if (c.imag >= 0)
        printf("Result = %.2f + %.2fi\n", c.real, c.imag);
    else
        printf("Result = %.2f - %.2fi\n", c.real, -c.imag);
}

int main() {
    struct Complex num1, num2, result;
    int choice;

    
    printf("Enter first complex number (real imaginary): ");
    scanf("%f %f", &num1.real, &num1.imag);

    
    printf("Enter second complex number (real imaginary): ");
    scanf("%f %f", &num2.real, &num2.imag);

    do {
        
        printf("\n========== MENU ==========\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("Addition: ");
                display(result);
                break;

            case 2:
                result = subtract(num1, num2);
                printf("Subtraction: ");
                display(result);
                break;

            case 3:
                result = multiply(num1, num2);
                printf("Multiplication: ");
                display(result);
                break;

            case 4:
                printf("Exiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}