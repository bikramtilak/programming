#include<stdio.h>
void main(){
float dollar,pound,rupees;
printf("Enter the amount in dollar and pound");
scanf("%f%f", &dollar,&pound);
rupees=dollar*48;
printf("Amount in rupees=%f",rupees);
pound=dollar*70;
printf("Amount in pound=%f",pound);
}
