#include<stdio.h>
#include<math.h>
int power(int a,int b){
int ans=1;
for(int i=0;i<b;i++){
ans*=a;
}
return ans;
}
int main(){
int a,b;
printf("Enter num a:\n");
scanf("%d",&a);
printf("Enter num b:\n");
scanf("%d",&b);
double ans=pow(a,b);
printf("power of %d^%d=%1f", a,b,ans);
}
