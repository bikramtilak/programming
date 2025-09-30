#include <stdio.h>

int main() {
    int a, b, c;
    int largest, smallest;


    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);


    largest = a;
    if (b > largest){
        largest = b;
    }
    if (c > largest){
        largest = c;
    }


    smallest = a;
    if (b < smallest){
        smallest = b;
    }
    if (c < smallest){
        smallest = c;
    }


    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}
