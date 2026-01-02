//Write //a program to find the 1’s complement of a binary number and print it.//

#include <stdio.h>

int main() {
    int binary, remainder, ones_complement = 0, place = 1;

    printf("Enter a binary number:");
    scanf("%d", &binary);

    while (binary != 0)
    {
       remainder = binary % 10;
       if (remainder == 0)
       {
        ones_complement += place;
       }
       place *= 10;
       binary /= 10;
    }

    printf("1 's complement is %d\n", ones_complement);

    return 0;
    

}
