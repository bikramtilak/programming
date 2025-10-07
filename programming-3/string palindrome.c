#include<stdio.h>
#include<string.h>
int main(){
char str[100];
int i,len,flag=1;

printf("Enter a string:");
gets(str);
len=strlen(str);
for(i=0;i<len/2;i++){
if(str[i]!=str [len-i-1]){
flag=0;
break;
}
}
if (flag)
printf("string is palindrome");
else
printf("string is not palindrome");

return 0;
}
