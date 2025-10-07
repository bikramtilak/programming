#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50}; // initial array
    int n = 5; // number of elements

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    // Delete from the first position
    if (n > 0) {
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1]; // Shift elements left
        }
        n--; // Decrease size
    } else {
        printf("Array is already empty.\n");
    }

    printf("Array after deleting first element:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
