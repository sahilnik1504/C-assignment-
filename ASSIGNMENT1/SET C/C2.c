/*display all armstrong numbers between 1 and 500 */
#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, sum;
    printf("Armstrong numbers between 1 and 500 are:\n");

    for (num = 1; num <= 500; num++) {
        originalNum = num;
        sum = 0;

        while (originalNum != 0) {
            remainder = originalNum % 10;
            sum += pow(remainder, 3);
            originalNum /= 10;
        }

        if (sum == num) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}