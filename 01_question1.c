#include <stdio.h>

int main() {
    int i = 2;
    int *j = &i;
    int **k = &j;
    printf("The adress of i is %u\n",i);
    printf("The adress of i is %u\n",*j);
    printf("The address of i is %u\n",&j);

    

    return 0;
}