#include <stdio.h>

int main() {
    int m, p, n;
    int i, j, k;


    printf("Enter number of rows of matrix A: ");
    scanf("%d", &m);
    printf("Enter number of columns of matrix A (and rows of B): ");
    scanf("%d", &p);
    printf("Enter number of columns of matrix B: ");
    scanf("%d", &n);


    int A[m][p], B[p][n], C[m][n];


    printf("Enter elements of matrix A:\n", m, p);
    for(i = 0; i < m; i++) {
        for(j = 0; j < p; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }


    printf("Enter elements of matrix B :\n", p, n);
    for(i = 0; i < p; i++) {
        for(j = 0; j < n; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }


    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            C[i][j] = 0;
        }
    }


    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            for(k = 0; k < p; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }


    printf("Resultant matrix after multiplication (C = A x B):\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
