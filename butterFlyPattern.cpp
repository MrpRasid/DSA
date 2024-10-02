#include<iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        for(int j=2*(n-i-1);j>0;j--){
            cout<<"  ";
        }

        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    // 2nd 

     for(int i=0;i<n;i++){
        for(int j=n-i;j>0;j--){
            cout<<"* ";
        }
        for(int j=0;j<2*i;j++){
            cout<<"  ";
        }

        for(int j=n-i;j>0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}