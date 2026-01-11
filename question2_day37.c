//check if a matrix is symmetric.//

#include <stdio.h>

int main() {

    int matrix[100][100];
    int rows, cols;

    int i, j;
    int isSymmetric = 1;

    printf("Enter number of rows and columns:");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elemnts of the matrix:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if matrix is symmetric

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric)
        {
            break;
        }
    }

    // Print result

    if (isSymmetric)
    {
        printf("The matrix is symmetric.\n");
    }
    else
    {
        printf("The matrix is not symmetric.\n");
    }
    
}