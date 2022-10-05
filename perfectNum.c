#include<stdio.h>
int main(){
    int num;
    printf("Ente the number for check it's perfect num or not: ");
    scanf("%d",&num);
    int rem,sum=0;
    for(int i=1;i<num;i++){
        rem=num%i;
        if(rem==0){
            sum=sum+i;
        }
    }
   if(sum ==num){
    printf("The number is perfect number");
   }else{
    printf("This is not a perfect number");
   }
}
