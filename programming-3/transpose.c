#include <stdio.h>

#define size 4

int main() {
    int matrix[size][size], transpose[size][size];
    int i, j;


    printf("Enter elements of a 4x4 matrix:\n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }


    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }


    printf("Original Matrix:\n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }


    printf("Transposed Matrix:\n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
