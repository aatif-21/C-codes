/*#include <stdio.h>
int main() {
    int n = 4;
    int i = 1;
    int product = 1;

    while (i<=n)
    {
        product *=i;
        i++;
    }
    printf("The factorial is %d\n",product);
    return 0;
    
}*/

#include <stdio.h>
int main() {
    int n = 5;
    int i = 1;
    int product = 1;

    do
    {
        product *=i;
        i++;
    } while (i<=n);
    printf("The factorial is %d\n",product);
    
}