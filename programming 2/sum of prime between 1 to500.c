#include <stdio.h>

int main() {
    int i, j,prime;
    int sum=0;

        for (i = 2; i <= 500; i++) {
           prime = 1;

           for (j = 2; j<= i/2; j++) {
           if(i%j==0){
           prime=0;
           break;
            }
        }


    if (prime){
    sum+=i;
        }
        }
    printf("sum of prime numbers between 1 and 500 is:%d\n",sum);

    return 0;
}
