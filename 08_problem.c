#include <stdio.h>
int main() {
    int n = 8;
    int product =1;

    for (int i = 1; i <=n; i++)
    {
        product *=i;
    }
    printf("The factorial is %d\n",product);

    return 0;
    
}