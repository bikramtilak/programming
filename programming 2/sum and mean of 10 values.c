#include<stdio.h>
int main(){
int value[10];
int sum=0;
float mean;
printf("Enter 10 values:\n");
for(int i=0; i<10; i++){
printf("%d",i+1);
scanf("%d",& value[i]);
sum+=value[i];
}
mean=sum/10.0;

printf("sum=%d\n",sum);
printf("mean=%f\n",mean);
return 0;
}
