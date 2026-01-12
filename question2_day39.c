//Multiply two matrices.//

#include <stdio.h>

int main() {
    int matrix1[100][100], matrix2[100][100], result[100][100];
    int rows1, cols1, rows2, cols2;
    int i, j, k;

    printf("Enter number of rows and columns for first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter number of rows and columns for second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    if (cols1 != rows2) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            result[i][j] = 0;
        }
    }

    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            for (k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("Resultant matrix after multiplication:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}