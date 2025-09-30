#include<stdio.h>
int main(){
int n,i;
printf("Enter a number (n):");
scanf("%d",&n);
printf("first %d even numbers are:\n",n);
for(i=0;i<=n;i=i+2){
printf("%d",i);
}
return 0;
}
