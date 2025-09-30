#include <stdio.h>

int main() {
    int i, j,Prime;

    printf("prime numbers between 1 and 500 are:\n ");

        for (i = 2; i <= 500; i++) {
           prime = 1;

           for (j = 2; j<= i; j++) {
           if(i%j==0){
           prime=0;
           break;
            }
        }


    if (Prime){
        printf("%d",i);
        }
        }
    printf("\n");

    return 0;
}
