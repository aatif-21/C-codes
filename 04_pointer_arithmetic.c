#include <stdio.h>
int main() {

   /* pointer aerthemetic using integer
   int a = 5;
    int*j = &a;
    printf("The address of the a is %u\n",&a);
    printf("The address of the a is %u\n",&j);
    j++;
    printf("The address of the a is %u\n",j);

    return 0;*/
    // pointer aerithmetic using character

    char a = 'A';
    char * ptr = &a;
    printf("The address of a is %u\n",a);
    printf("The address of the a is %u\n",ptr);
    ptr++;
    printf("The address of the a is %u\n",ptr);

    return 0;
}