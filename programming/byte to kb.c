#include<stdio.h>
int main(){
float n,kb,mb,gb;
printf("Enter the no. of byte");
scanf("%f",&n);
kb=n/1024.0;
mb=n/1000000.0;
gb=mb/1024.0;
printf("Kb=%f",kb);
printf("Mb=%f",mb);
printf("Gb=%f",gb);
return 0;
}
