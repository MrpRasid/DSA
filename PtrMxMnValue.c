#include<stdio.h>
void Minmx(int arr[],int len,int *min,int *max){
    *min = *max = arr[0];
    for(int i=1;i<len;i++){
        if(arr[i]>*max){
            *max =arr[i];
        }
        if(arr[i]<*min){
            *min=arr[i];
            
        }
    }
}
int main(){
    int arr[]={1,2,3,9,56,35,6,34};
    int len =sizeof(arr)/sizeof(arr[0]);    
    int min,max;
    Minmx(arr,len,&min,&max);
    printf("The min is: %d \n and the max value is: %d",min,max);

}
