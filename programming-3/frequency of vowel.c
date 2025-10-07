#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
char str[100];
int a=0,e=0,i=0,o=0,u=0;

printf("Enter a string:");
gets(str);

for(i=0;str[i]!='\0',i++){
char ch=tolower(str[i]);
if(ch=='a') a++;
else if(ch=='e') e++;
else if(ch=='i') i++;
else if(ch=='o') o++;
else if(ch=='u') u++;


printf("%c\n",str[i]);
}
return 0;
}
