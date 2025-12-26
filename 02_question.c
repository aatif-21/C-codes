// write a program to convert fahrenheit to celcius
/*#include <stdio.h>
float c2f( float );
float c2f( float c) {
    return ((9*c)/5) + 32;
}
int main() {
    float c = 45;
    printf("clecius to fahrenheit of %.2f is %.2f\n",c,c2f(c));

    return 0;
}*/

#include <stdio.h>
float c2f(float);
float  c2f( float c) {
    return ((9*c)/5) + 32;
}

int main() {
    float c;
    printf("Enter the temperature in celcius\n");
    scanf("%f",&c);

    printf("celcius to fahrenheit of %.2f is %.2f\n",c,c2f(c));
    return 0;

}