// write a program to find the average of the three number
#include <stdio.h>
int average( int,int,int);
int average(int a ,int b, int c) {
    printf("The average of %d %d %d is %d\n",a,b,c,(a+b+c)/3);
    return (a+b+c)/3;
}
int main() {
    int x = 2;
    int y = 4;
    int z = 6;
    average(x,y,z);
    return 0;

}