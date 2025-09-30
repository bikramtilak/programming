#include<stdio.h>
int main(){
int n,i, sum=0;
printf("Enter the value of n:");
scanf("%d",&n);

for(i=1;i<=n;i++){
sum+=i;
}
printf("sum of %d natural numbers are:%d\n",n,sum);
return 0;
}
