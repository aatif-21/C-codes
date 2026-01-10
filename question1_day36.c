//Find the sum of each row of a matrix and store it in an array.//

#include <stdio.h>

int main()
{
    int matrix[100][100];
    int rowSums[100];
    int rows, cols;
    int i, j;

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

    // Calculate the sum of each row
    for(i = 0; i < rows; i++)
    {
        rowSums[i] = 0; // Initialize sum for the current row
        for(j = 0; j < cols; j++)
        {
            rowSums[i] += matrix[i][j];
        }
    }

    // Print the sum of each row
    printf("The sum of each row is:\n");
    for(i = 0; i < rows; i++)
    {
        printf("Sum of row %d: %d\n", i + 1, rowSums[i]);
    }

    return 0;
}