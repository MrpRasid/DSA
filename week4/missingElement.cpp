#include<iostream>
using namespace std;
int missing(int arr[],int n){
    int s=0;
    int e=n-1;
    int ans=-1;
    // Edge cases
    if(arr[0]!=1) return 1;
    if(arr[n-1]!=n+1) return n+1;
    while(s<=e){
        int mid= s + (e-s)/2;
        int ope = arr[mid]-mid;
        if(ope==1){
            s=mid+1;
        }else{
            ans = mid;
            e = mid-1;
        }
    }
    return ans+1;
}
int main(){
    int arr[] ={1,2,3,4,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    // int n=7;
    int element = missing(arr,n);
    cout<<"missing Element is: "<<element;
}