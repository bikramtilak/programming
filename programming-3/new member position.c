#include <stdio.h>

int main() {
    int arr[100];
    int n, i, pos, newNumber;


    printf("Enter number of elements (max 99): ");
    scanf("%d", &n);


    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    printf("Enter the number to insert: ");
    scanf("%d", &newNumber);

    printf("Enter the position to insert at (0 to %d): ", n);
    scanf("%d", &pos);




    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }


    arr[pos] = newNumber;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
