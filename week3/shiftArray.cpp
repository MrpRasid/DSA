#include<iostream>
using namespace std;

int shiftArrays(int arr[],int size){
    int brr[size];
    int k;
    cin>>k;
    for(int i=0;i<size;i++){
        int index = (i+k)%size;
        brr[index] = arr[i];
    }

    for(int i=0;i<size;i++){
        cout<<brr[i]<<" ";
    }
}

int main(){
    int arr[] ={10,20,30,40,50,60};
    int n=6;
    shiftArrays(arr,n);
}