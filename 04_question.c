// write a function to print the fabonacci series
/*#include <stdio.h>
int fabonacci(int);
int fabonacci(int n){
    if(n==1 || n==2) {
        return n-1;
    }
    return fabonacci(n-1) + fabonacci(n-2);
}
int main() {
    int n = 5;
    printf("The value of fabonacci at %d is %d\n",n,fabonacci(n));

    return 0;

}*/

#include <stdio.h>
int fabonacci(int);
int fabonacci(int n){
    if(n==1 || n==2) {
        return n-1;
    }
    return fabonacci(n-1) + fabonacci(n-2);
}
int main() {
    int n,i;
    printf("Enter how many terms you want to print ");
    scanf("%d",&n);
    printf("fabonacci series upto %d term is\n ",n);
    for ( i = 1; i <=n; i++)
    {
        printf("%d",fabonacci(i));
    }
    
    return 0;

}
