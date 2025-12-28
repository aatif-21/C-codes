#include <stdio.h>

int main() {
    int s[] = {1,2,3};
    int *ptr = s;
    printf("The adress at %u is %d",ptr+3,*ptr+3);
    return 0;
}