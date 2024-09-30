#include<iostream>
using namespace std;

void allDigits(int n){
    while(n){
        int singleDigit = n%10;

        cout<<"digit is: "<<singleDigit<<endl;
        n=n/10;
    }
}

int main(){
 int n;
 cout<<"Enter a Number: ";
 cin>>n;
allDigits(n);

}