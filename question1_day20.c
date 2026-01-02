//Write //a program to find the product of odd digits of a number//

#include <stdio.h>

int main() {
    int num, digit, product = 1, has_added = 0;

    printf("Enter the digit:");
    scanf("%d", &num);

    for ( ; num != 0; num = num / 10)
    {
        digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
            has_added = 1;
        }
    }

    if (has_added)
        printf("Product of odd digits is %d\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}