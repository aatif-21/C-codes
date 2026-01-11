//Add two matrices.//

#include <stdio.h>

int main()
{
    int matrixA[100][100], matrixB[100][100], sumMatrix[100][100];
    int rows, cols;
    int i, j;

    // Read number of rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Read elements of the first matrix
    printf("Enter the elements of the first matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrixA[i][j]);
        }
    }

    // Read elements of the second matrix
    printf("Enter the elements of the second matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrixB[i][j]);
        }
    }

    // Calculate the sum of the two matrices
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            sumMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    // Print the resulting sum matrix
    printf("The sum of the two matrices is:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d ", sumMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}