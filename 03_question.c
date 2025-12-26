// wite a funtion to calculate force of attraction on a body of mass m exerted by earth . consider g = 9.8
#include <stdio.h>
float mass(float);
float mass(float m) {
       return m*9.8;
}
int main() {

    float m = 50;
    printf("The force of attraction on body of mass %.2f is %.2f\n",m,m*9.8);

    return 0;


}