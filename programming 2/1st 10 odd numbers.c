#include<stdio.h>
int main(){
int i,n;
printf("Enter a number (n):");
scanf("%d", &n);
printf("first 10 odd numbers are:\n",n);
for(i=1;i<=10;i=i+2){
printf("%d",i);
}
return 0;
}
