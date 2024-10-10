#include<iostream>
using namespace std;

void NegativeLeft(int arr[],int n){
    int s=0;
    int e=n-1;
    int i=0;
    while(i<=e){
        if(arr[i]<0){
            swap(arr[i],arr[s]);
            s++;
            i++;
        }else{
            i++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] ={1,2,-3,4,-5,-6};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    NegativeLeft(arr,n);

}