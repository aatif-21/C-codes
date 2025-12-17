#include <stdio.h>
int main() {
    int a,b;
    printf("Ente the number a:");
    scanf("%d",&a);

    printf("Enter the number b:");
    scanf("%d",&b);

    int sum,diffrence,product,quotient;
    sum = a+b;
    diffrence = a-b;
    product = a*b;
    quotient = a%b;
    printf("The sum of the two number is %d\n",sum);
    printf("The diffrence of the two number is %d\n",diffrence);
    printf("The product of the two number is %d\n",product);
    printf("The quotient of the two number is %d\n",quotient);

    return 0;

}    