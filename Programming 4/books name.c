#include <stdio.h>

int main() {
    char books[3][100];
    char *ptr[3];
    // Input book names
    printf("Enter names of 3 books:\n");
    for (int i = 0; i < 3; i++) {
        printf("Book %d: ", i + 1);
        fgets(books[i], sizeof(books[i]), stdin);
        ptr[i] = books[i];
    }


    printf("\nYou entered the following books:\n");
    for (int i = 0; i < 3; i++) {
        printf("Book %d: %s", i + 1, ptr[i]);
    }

    return 0;
}
