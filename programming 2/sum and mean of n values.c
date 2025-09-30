#include <stdio.h>

int main() {
    int n, sum = 0;
    float mean;

    printf("Enter number of values: ");
    scanf("%d", &n);
    int value[n];

    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Value %d: ", i + 1);
        scanf("%d", &value[i]);
        sum += value[i];
    }

    mean = sum / n;

    printf("Sum = %d\n", sum);
    printf("Mean = %f\n", mean);

    return 0;
}
