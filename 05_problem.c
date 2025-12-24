/*#include <stdio.h>
int main() {
    int i = 1;
    int sum = 0; yaha pe sum = 0 islie kie hai kyu ki sum ki value 0 ho jye.

    while (i<=10)
    {
        sum +=i;
        i++;
    }

    printf("The sum of first 10 natural number is %d",sum);

    return 0;
    
}*/

#include <stdio.h>
int main() {
    int i,sum = 0;
    //int sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        sum +=i;
    }
    printf("The sum of 10 natural number is %d",sum);

    return 0;
    
}