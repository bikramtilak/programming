#include<stdio.h>
int main(){
    int arr[5],i,j,temp;

    printf("Enter 5 integer:\n");
    for(i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }
     for(i=0; i<5-1; i++){
    for(i=0; i<5-i-1; i++){
        if(arr[i] < arr[j+1]){

            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
     printf("array sorted in descending order:\n");
      for(i=0; i<5; i++){
          printf("%d",arr[i]);
      }
      printf("\n");
      return 0;
}
