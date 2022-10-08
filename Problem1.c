//write a program to check whether any of the digit's in a number appears more than once

#include<stdio.h>
int main(){
    int arr[7]={0};
    int n;
    printf("Enter the number you want to check same digit's are one or more time exist: ");
    scanf("%d",&n);
    while(n>0){
        int rem =n%10;
        if(arr[rem]==1){
            break;
        }
        arr[rem]=1;
        n=n/10;
    }
    if(n>0){
        printf("yes");
    }else{
        printf("no");
    }

}
