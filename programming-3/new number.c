#include <stdio.h>

int main() {
    int arr[5];
    int i, newNumber;

    printf("Enter 4 elements:\n");
    for(i = 1; i <= 4; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to insert at the beginning: ");
    scanf("%d", &newNumber);


    for(i = 4; i >= 1; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = newNumber;


    printf("Array after insertion:\n");
    for(i = 0; i <= 4; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
