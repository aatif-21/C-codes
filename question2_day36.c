//Find the transpose of a matrix.//

#include <stdio.h>

int main()
{
    int matrix[100][100];
    int transpose[100][100];
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

    // Calculate the transpose of the matrix
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print the transpose of the matrix
    printf("The transpose of the matrix is:\n");
    for(i = 0; i < cols; i++)
    {
        for(j = 0; j < rows; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}