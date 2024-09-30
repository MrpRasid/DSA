#include<iostream>
#include<cmath>
using namespace std;

int convertBinary(int n){
    int number=0;
    int i=1;
    while(n>0){
        int digit = n&1;
       n = n>>1;
       

        number = number + (digit * i);
        i = i * 10;
    }
    return number;
}

int main(){
    cout<<"Please Enter the Number: ";
    int n;
    cin>>n;

   int ans = convertBinary(n);
   cout<<ans;
}