#include<stdio.h>
int main(){
float P,R,T,si;
printf("Enter the principle amount:");
scanf("%f",&P);
printf("Enter the rate of interest:");
scanf("%f",&R);
printf("Enter the time in year:");
scanf("%f",&T);
si=(P*R*T)/100;
printf("simple interest=%f",si);
}
