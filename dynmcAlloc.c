#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int *ptr = (int *)malloc(n*sizeof(int));
      if(ptr==NULL){
             printf("memory is not avalaible");
             exit(1);
         }
        for(i=0;i<n;i++){
                 printf("Enter the integers: ");
                 scanf("%d", ptr +i);
          }

         for(i=0;i<n;i++){
                 printf("%d ",*(ptr+i));      
         }
}