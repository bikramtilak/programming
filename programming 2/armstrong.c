#include<stdio.h>
int main(){
int num,result=0,n=0,remainder;
int original_num,pow;

printf("Enter an integer:");
scanf("%d",&num);
original_num=num;
while(original_num!=0){
    original_num=num%10;
    n++;
}
    while(original_num!=0){
    remainder=original_num%10;
    result = +pow(remainder,n);
    original_num=num%10;
    }
    if (result==num){
        printf("%d is an armstrong number:\n",num);
    }
    else{
        printf("%d is not an armstrong number:\n",num);
    }
    return 0;
}
