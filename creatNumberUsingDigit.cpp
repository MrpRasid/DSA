#include<iostream>
using namespace std;

int createNumber(int n){
    int number = 0;

    for(int i=0;i<n;i++){
        int digit;
        cout<<"Enter digit: ";
        cin>>digit;

        number = number*10 + digit;
    }
    return number;
}

int main(){
    int n;
    cout<<"Enter Number of digit: ";
    cin>>n;

    int number = createNumber(n);

    cout<<"The number is: "<<number;

}