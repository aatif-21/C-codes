//Write //a program to check if a number is a strong number.//

#include <stdio.h>

int main() {

    int num, temp, digits, sum = 0, factorial;

    printf("Enter the number:");
    scanf("%d", &num);

    temp = num;

    while (temp > 0)
    {
        digits = temp % 10;
        factorial = 1;
        for (int i = 1; i <= digits; i++)
        {
            factorial *= i;
        }
        sum += factorial;
        temp /= 10;
    }

    if (sum == num)
    {
        printf("The number is a strong number.");
    }
    else
    {
        printf("The number is not a strong number.");
    }

}