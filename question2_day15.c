#include <stdio.h>

int main() {
    int num, reverse = 0,  digit;
    printf("Enter an integer: ");
    scanf("%d", &num);

   /* while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }*/

    /*for (;num > 0; num = num/10)      //for (initialization; condition; update)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
    }*/

    do
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num/10;
    } while ( num > 0);
    
    

    printf("Reversed integer: %d\n", reverse);
    return 0;
}