//Find the sum of all elements in a matrix.//

#include <stdio.h>

int main()
{
    int matrix[100][100];
    int rows, cols;
    int i, j;
    int sum = 0;

    // Read number of rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Read matrix elements
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of all elements
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            sum += matrix[i][j];
        }
    }

    // Print the sum
    printf("The sum of all elements in the matrix is: %d\n", sum);

    return 0;
}
