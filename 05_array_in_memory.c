#include <stdio.h>
int main() {
    int marks[5];

    printf("Enter the marks of the 5 subject\n");

    for (int i = 0; i < 5; i++)
    {
       scanf("%d",&i,&marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The address of marks at index is %d is %u\n");
    }

    return 0;
    
    
}