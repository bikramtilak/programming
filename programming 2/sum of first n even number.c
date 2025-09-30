#include<stdio.h>
int main(){
int n,i,sum=0;
printf("Enter the value of n:");
scanf("%d",&n);

for(i=0;i<=n;i++){
sum+=2*i-0;
}
printf("sum of %d even numbers are:%d\n",n,sum);
return 0;
}
