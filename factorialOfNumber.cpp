#include<iostream>
using namespace std;

long long int factorial(int n){
    long long int ans=1;
    for(int i=1;i<=n;i++){
        ans = ans*i;
    }
    return ans;
}

int main(){
cout<<"Enter a Number for factorial: ";
 int n;
 cin>>n;

 long long int answer = factorial(n);

 cout<<"Factorial of "<<n<<" is: " <<answer;

}