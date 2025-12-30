#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main() {
    struct employee e1, e2;

    printf("Enter the value of code: ");
    scanf("%d", &e1.code);

    printf("Enter the value of salary: ");
    scanf("%f", &e1.salary);

    printf("Enter the value of name: ");
    scanf("%s", e1.name);

    printf("\nEmployee 1 Details: %d %.2f %s\n", e1.code, e1.salary, e1.name);


    printf("Enter the value of code: ");
    scanf("%d", &e2.code);

    printf("Enter the value of salary: ");
    scanf("%f", &e2.salary);

    printf("Enter the value of name: ");
    scanf("%s", e2.name);

    printf("\nEmployee 2 Details: %d %.2f %s\n", e2.code, e2.salary, e2.name);

    return 0;
}
