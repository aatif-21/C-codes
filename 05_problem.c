/*#include <stdio.h>
void sum(int , int);
void sum(int a , int b) {
    int s = a + b;
    printf("The sum of the number is %d\n",s);
}
void average(int , int);
void average(int a , int b) {
    float average = (a + b)/2.0;
    printf("The average of the number is %.2f\n",average);
}
int main() {
    int x = 4;
    int y = 6;
    sum(x,y);
    average(x,y);
   // printf("The address of sum is %u and of average is %u\n",);
    
    return 0;
}*/

#include <stdio.h>
int* sum(int , int);
int* sum(int a , int b) {
    int s = a + b;
    int *ptr = &s;
    printf("The sum of the number is %d\n",s);
    return ptr;
}
float* average(int , int);
float* average(int a , int b) {
    float average = (a + b)/2.0;
    float *ptr = &average;
    printf("The average of the number is %.2f\n",average);
    return ptr;
}
int main() {
    int x = 4;
    int y = 6;
    int* ptr1;
    float* ptr2;
    printf("The address of sum is %u\n and of average is %u\n",ptr1,ptr2);
    
    return 0;
}