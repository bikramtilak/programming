#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int value_to_search = 30;
    int found_index = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] == value_to_search) {
            found_index = i;
            break;
        }
    }

    if (found_index != -1) {
        printf("Value %d found at index %d\n", value_to_search, found_index);
    } else {
        printf("Value %d not found in the array\n", value_to_search);
    }

    return 0;
}
