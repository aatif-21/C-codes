#include <stdio.h>
int main() {
    int n;

    printf("Enter the number for table:");
    scanf("%d",&n);

    for(int i = 10; i; i-- ) { // point to be noted that yaha pe i <= 1 nahi hog kyu ki hame 10 tak nahi jana 1 tak jana hai.
        printf("%d X %d = %d\n",n,i,n*i);
    }
    return 0;
}