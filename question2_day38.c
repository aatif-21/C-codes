//Find the sum of main diagonal elements for a square matrix.//

#include <stdio.h>

int main() {

    int matrix[100][100];
    int rows, cols;

    int i, j;
    int sum = 0;

    printf("Enter the number of rows and columns");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix:\n");
    scanf("%d", &matrix[i][j]);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
           if (i == j)
           {
            sum += matrix[i][j];
           }
           
        }
        
    }
    
    printf("Sum of the main diagonal elements is: %d\n", sum);

    return 0;
}