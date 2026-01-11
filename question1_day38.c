//Check if the elements on the diagonal of a matrix are distinct.//

#include <stdio.h>

int main() {
    int matrix[100][100];
    int rows, coloumns;

    int i, j;
    int isdistinct = 1;

    printf("Enter number of rows and coloumns:");
    scanf("%d %d", &rows, &coloumns);

    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < coloumns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < rows && isdistinct; i++) {
        for (j = i + 1; j < rows && isdistinct; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                isdistinct = 0;
            }
        }
    }

    if (isdistinct) {
        printf("Diagonal elements are distinct.\n");
    } else {
        printf("Diagonal elements are not distinct.\n");
    }
}