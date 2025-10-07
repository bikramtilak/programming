#include <stdio.h>

int main() {
    int arr[100];
    int n = 5;
    int i;


    for (i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    int newNumber = 99;

    if (n < 100) {
        arr[n] = newNumber;
        n++;
    } else {
        printf("Array is full!\n");
    }


    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
