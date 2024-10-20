#include<iostream>
using namespace std;
int firstIndx(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
        int mid = s+ (e-s)/2;
        if(target==arr[mid]){
            ans = mid;
            e =mid-1;
        }else if(arr[mid]>target){
            e = mid-1;
        }else if(arr[mid]<target){
            s=mid+1;
        }
    }
    return ans;
}

int main(){
    int arr[] ={1,2,3,3,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = firstIndx(arr,n,3);
    cout<<"First occurance is: "<<ans;

}