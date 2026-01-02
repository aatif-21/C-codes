//Write //a program to find the sum of digits of a number.

#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter the digit: ");
    scanf("%d", &num);

   /* while (num != 0)
    {
        digit = num %10;
        sum += digit;
        num = num /10;

    }*/

    for ( ; num != 0; num = num / 10)
    {
        digit = num % 10;
        sum += digit;
    }
    

    printf("Sum of digits is %d\n", sum);

    return 0;
    
}