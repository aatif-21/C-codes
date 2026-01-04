/*Write a program to print the following pattern:
*
**
***
****
******/

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)       // number of rows
    {
        for(j = 1; j <= i; j++)   // stars in each row
        {
            printf("*");
        }
        printf("\n");             // new line after each row
    }

    return 0;
}
