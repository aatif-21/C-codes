#include <stdio.h>

int main()
{
    int num, originalNum, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    /*for (; num > 0; num = num / 10)
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
    }*/
   /*while (num > 0)
   {
      remainder = num % 10;
      reversed = reversed * 10 + remainder;
      num = num / 10;
   }*/

   do
   {
    remainder = num % 10;
      reversed = reversed * 10 + remainder;
      num = num / 10;

   } while (num > 0);
   
   

    if (originalNum == reversed)
        printf("The number is a palindrome.");
    else
        printf("The number is not a palindrome.");

    return 0;
}
