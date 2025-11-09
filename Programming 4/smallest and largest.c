#include <stdio.h>

#define ROW 3
#define COL 3

int main() {
    int matrix[ROW][COL];
    int *ptr = &matrix[0][0];
    int size = ROW * COL;


    printf("Enter elements of 3x3 matrix:\n");
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            scanf("%d", (ptr + i * COL + j));
        }
    }


    int largest = *ptr;
    int smallest = *ptr;


    for (int i = 1; i < size; i++) {
        if (*(ptr + i) > largest)
            largest = *(ptr + i);
        if (*(ptr + i) < smallest)
            smallest = *(ptr + i);
    }


    printf("\nLargest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);

    return 0;
}
