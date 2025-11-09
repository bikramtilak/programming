#include <stdio.h>
#include <string.h>

void abbreviate(char *name) {
    char *ptr = name;
    char *lastSpace = strrchr(name, ' ');

    while (ptr < lastSpace) {

        if (ptr == name || *(ptr - 1) == ' ') {
            printf("%c. ", *ptr);
        }
        ptr++;
    }


    printf("%s\n", lastSpace + 1);
}

int main() {
    int n;
    char names[100][100];

    printf("Enter number of names: ");
    scanf("%d", &n);
    getchar();

    printf("Enter %d full names:\n", n);
    for (int i = 0; i < n; i++) {
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = '\0';
    }

    printf("\nAbbreviated Names:\n");
    for (int i = 0; i < n; i++) {
        abbreviate(names[i]);
    }

    return 0;
}
