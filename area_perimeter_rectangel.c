#include <stdio.h>

int main() {
    float length, breadth, perimeter, area;

    
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    
    perimeter = 2 * (length + breadth);
    area = length * breadth;

    
    printf("\nPerimeter of the rectangle = %.2f\n", perimeter);
    printf("Area of the rectangle = %.2f\n", area);

    return 0;
}
