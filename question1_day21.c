//Write // //a program to swap the first and last digit of a number.//

#include <stdio.h>

int main() {
    int num, firstdigit, lastdigit, digits = 0, temp, middle;

    printf("EEnter the number:");
    scanf("%d", &num);

    lastdigit = num % 10;
    temp = num;
    //digits = 0;

    while (temp>= 10)
    {
        temp = temp / 10;
        digits++;
    }
    
    firstdigit = temp;
    middle = (num % (int) pow(10, digits)) / 10;
    int swapped = lastdigit * (int) pow(10, digits) + middle * 10 + firstdigit;

    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;

}