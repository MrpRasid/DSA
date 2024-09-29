#include <iostream>
using namespace std;

// ** 1st Method -- correct

// void primeNumbers(int n)
// {
//     for (int i = 2; i <= n; i++)
//     {      
//             bool istu = true;
//             for (int j = 2; j < i; j++)
//             {
//                if (i % j == 0)
//                 {
//                     istu = false;
//                     break;
//                 }
//             }
//             if (istu)
//             {
//                 cout << i << " ";
//             }       
//     }
// }

// int main()
// {
//     cout << "Enter the number: ";
//     int n;
//     cin >> n;

//     primeNumbers(n);
// }


// ** 2nd Method --- 

 bool checkPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
 }

int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    for(int i=2;i<=n;i++){
        bool isPrime = checkPrime(i);

        if(isPrime){
            cout<<i<<" ";
        }
    }

}