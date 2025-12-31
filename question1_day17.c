//Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

/*int main() {
    int num, originalNum, remainder, n = 0;
    int result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);*/

int main() {
    int num, originalNum, remainder;
    int digits = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    /* Count number of digits */
    for (; originalNum != 0; originalNum /= 10) {
        digits++;
    }

    originalNum = num;

    /* Calculate Armstrong sum */
    for (; originalNum != 0; originalNum /= 10) {
        remainder = originalNum % 10;
        sum += pow(remainder, digits);
    }

    /* Check result */
    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
