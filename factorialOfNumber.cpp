#include<iostream>
using namespace std;

int factorial(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans = ans*i;
    }
    return ans;
}

int main(){
cout<<"Enter a Number for factorial: ";
 int n;
 cin>>n;

 int answer = factorial(n);

 cout<<"Factorial of "<<n<<" is: " <<answer;

}