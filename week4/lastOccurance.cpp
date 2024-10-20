#include<iostream>
using namespace std;

int lastIndex(int arr[],int n, int target){
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
        int mid = s +(e-s)/2;
    if(arr[mid]==target){
        ans=mid;
        s=mid+1;
    }else if(arr[mid]>target){
        e=mid-1;
    }else{
        s=mid+1;
    }
    }
    return ans;
}

int main(){
     int arr[] ={1,2,3,3,3,3,3,4,5};
     int n= sizeof(arr)/sizeof(arr[0]);
     int target=3;
     int ans = lastIndex(arr,n,target);
     cout<<"Last Occurance is: "<<ans;
}