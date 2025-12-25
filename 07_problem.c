/*#include <stdio.h>
int main() {
    int n;
    int sum = 0;

    printf("Enter the number for table:");
    scanf("%d",n);
    for (int i =1; i <=10; i++)
    {
      sum +=(8*i);
    }
    printf("The sum of the table of 8 is %d",sum);
    return 0;
    
}*/


#include <stdio.h>

int main() {
    int i = 1, num, sum = 0;

    printf("Enter the number for table: ");
    scanf("%d", &num);

    do {
        int result = num * i;
        printf("%d x %d = %d\n", num, i, result);
        sum += result;
        i++;
    } while (i <= 10);

    printf("The sum of the table of %d is %d\n", num, sum);

    return 0;
}