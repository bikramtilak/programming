#include <stdio.h>

#define ROW 4
#define COL 4

int main() {
    int matrix[ROW][COL];
    int *ptr = &matrix[0][0];
    int size = ROW * COL;


    printf("Enter elements of 4x4 matrix:\n");
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            scanf("%d", (ptr + i * COL + j));
        }
    }


    int arr[size];
    for (int i = 0; i < size; i++) {
        arr[i] = *(ptr + i);
    }


    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }


    printf("\nSorted elements (1D array):\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
