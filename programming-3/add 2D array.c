#include <stdio.h>

int main() {
    int rows, cols;
    int i, j;

    //
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);


    int A[rows][cols], B[rows][cols], C[rows][cols];

    printf("Enter elements of first matrix (A):\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }


    printf("Enter elements of second matrix (B):\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }


    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }


    printf("Resultant matrix after addition (C = A + B):\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
