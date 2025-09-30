#include <stdio.h>

int main() {
    int i, j,prime;
    int count=0;

        for (i = 2; i <= 500; i++) {
           prime = 1;

           for (j = 2; j<= i/2; j++) {
           if(i%j==0){
           prime=0;
           break;
            }
        }


    if (prime){
    count++;
        }
        }
    printf("Total number of prime number between 1 to 500 is:%d\n",count);
    return 0;
}
