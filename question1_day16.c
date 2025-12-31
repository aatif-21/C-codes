#include <stdio.h>

int main() {
    int num, binary[32], i = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

   /* for ( i = 0; num > 0; i++)
    {
       binary[i] = num % 2;
       num = num/2;
    }*/

    /*while (num > 0)
    {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }*/

    do
    {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    } while (num > 0);
    
    

    printf("Binary equivalent: ");

    for ( i = i - 1; i>=0; i--)
    {
        printf("%d", binary[i]);
    }
    
    

    return 0;
}