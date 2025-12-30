#include <stdio.h>
int main() {

    int marks[5];

    printf("Enter the marks of the 5 student\n");
    
    for ( int i = 0; i < 5; i++)
    {
        scanf("%d",&marks[i]);
    }

    for ( int i = 0; i < 5; i++)
    {
        printf("The value of marks at index %d is %d\n",i,marks[i]);
    }

    printf("marks 0 and marks 1 is %d %d\n",marks[0],marks[1]);
    return 0;
    
    

}