#include<stdio.h>
int main(){
int amount,notes;
int i;
int denominations[]={500,200,100,50,20,10,5,2,1}

 printf("\n Notes required:\n");
 for(i=o;i<g;i++){
 notes=amount/denominations[i];
 if (notes>0){
 printf("%d*%d\n",notes,denominations[i]);
 amount%=denominations[i];
 }
 }
 return 0;
 }
