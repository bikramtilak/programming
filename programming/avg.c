#include<stdio.h>
int main(){
float s1,s2,s3;
float total_marks;
float average_marks;
printf("Enter the marks of s1");
scanf("%f",&s1);
printf("Enter the marks of s2");
scanf("%f",&s2);
printf("Enter the marks of s3");
scanf("%f",&s3);
total_marks=s1+s2+s3;
average_marks=total_marks/3;
printf("total_marks=%f",total_marks);
printf("Average_marks=%f",average_marks);
}
