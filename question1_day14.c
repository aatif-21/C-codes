//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }

    printf("Sum of odd numbers = %d\n", sum);

    return 0;
}
