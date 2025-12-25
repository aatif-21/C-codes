/*#include <stdio.h>
int main() {
    int i;
    int n;
    int prime = 0;
    printf("enter the number:");
    scanf("%d",&n);

    for (int i = 2; i < n; i++)
    {
        if(n%i==0) {
            prime = 1;
        }
    }
    if(prime) {
        printf("%d is not prime\n",n);
    }
    else {
        printf("%d is prime\n",n);
    }
    return 0;
    
}*/

/*#include <stdio.h>

int main() {
    int n, i, isPrime = 1;   
    
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0; 
    } else {
        
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                isPrime = 0;  
                break;        
            }
        }
    }

    
    if (isPrime)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}*/

#include <stdio.h>
int main() {
    int i;
    int n;
    int prime = 0;
    printf("enter the number:");
    scanf("%d",&n);

    while (i<n)
    {
        if(n%i==0) {
            prime = 1;
        }
    }
    i++;
    if(prime) {
        printf("%d is prime\n",n);
    }
    else {
        printf("%d is not prime\n",n);
    }
    return 0;
}