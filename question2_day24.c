/*Write a program to print the following pattern:
1
12
123
1234
12345*/

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)          // number of rows
    {
        for(j = 1; j <= i; j++)      // numbers in each row
        {
            printf("%d", j);
        }
        printf("\n");                // move to next line
    }

    return 0;
}
