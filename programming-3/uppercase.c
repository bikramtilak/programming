#include<stdio.h>
#include<ctype.h>
int main(){
char str[100];
int i;

printf("Enter a string:");
gets(str);

for(i=0;str[i]!=0 '\0';i++)
str[i]=toupper(str[i]);
printf("uppercase string:%s",str);

return 0;
}
