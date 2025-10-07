#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos;

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


    printf("\nEnter position to delete (0 to %d): ", n );
    scanf("%d", &pos);


    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
    } else {

        for (int i = pos; i < n ; i++) {
            arr[i] = arr[i + 1];
        }
        n--;

        printf("Array after deleting from position %d:\n", pos);
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
