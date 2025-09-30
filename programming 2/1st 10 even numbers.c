#include<stdio.h>
int main(){
int i,n;
printf("Enter a number (n):");
scanf("%d",&n);
printf("First 10 even numbers are:\n",n);
for(i=0;i<=10;i=i+2){
printf("%d",i);
}
return 0;
}
