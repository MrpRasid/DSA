// Missing number with Duplicate value

#include<iostream>
using namespace std;
void dublicate(int arr[],int size){
    // dublicate number

    for(int i=0;i<size;i++){
        int indx = abs(arr[i]);
        if(arr[indx-1]>0){
          arr[indx-1]*=-1;  
        }
    }
    // for(int i=0;i<size;i++){
    //     cout<<" "<<arr[i];
    // }
    for(int i=0;i<size;i++){
        if(arr[i]>0){
            cout<<"Missing Number is: "<<i+1;
        }
    }
}
int main(){
    int arr[]={2,5,3,4,4};
    int n = sizeof(arr)/sizeof(arr[0]);
     dublicate(arr,n);
 

    
}