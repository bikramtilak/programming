#include<stdio.h>
int main(){
float sales,discount,net_sales;
printf("Enter the sale amount");
scanf("%f",&sales);
net_sales=sales-(0.10*sales);
printf("net_sales=%f",net_sales);
return 0;
}
