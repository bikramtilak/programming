#include<stdio.h>
int main(){
int n;
int count=0;
printf("Enter an integer:");
scanf("%d",&n);
if(n==0){
count=1;
}
else{
while(n!=0){
n=n/10;
count++;
}
}
printf("Number of digits:%d\n",count);
return 0;
}
