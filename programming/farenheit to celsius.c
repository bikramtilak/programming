#include<stdio.h>
int main(){
float celsius,fahrenheit;
printf("Enter temperature in fahrenheit");
scanf("%f",&fahrenheit);
celsius=(5.0/9.0)*(fahrenheit-32);
printf("celsius=%f",celsius);
}
