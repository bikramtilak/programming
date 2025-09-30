#include<stdio.h>
int main(){
int n,i,factorial;
printf("Enter the value of n:");
scanf("%d",&n);
if(n<0){
printf("Factorial is not defined for nagtive number:\n");
}
else{
for(i=1;i<=n;i++){
   factorial  = i;
}
printf("factorial of %d is:%d\n",n,factorial);
}
return 0;
}
