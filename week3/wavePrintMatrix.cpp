#include<iostream>
#include<vector>
using namespace std;
// colomn wise matrix wave print
void colomwiseWave(vector<vector<int>> arr){
    int m =arr.size();
    int n =arr[0].size();

    for(int i=0;i<n;i++){
        if((i&1)==0){
            for(int j=0;j<m;j++){
                cout<<arr[j][i]<<" ";
            }
        }else{
            for(int j=m-1;j>=0;j--){
                cout<<arr[j][i]<<" ";
            }
        }
    }
}

// Row wise Matrix Print

void rowWiseWave(vector<vector<int>> arr){
         int m =arr.size();
    int n =arr[0].size();
    for(int i=0;i<m;i++){
        if((i&1)==0){
            for(int j=0;j<n;j++){
               cout<<arr[i][j]<<" ";
            }
        }else{
            for(int j=n-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }  
}

int main(){
    vector<vector<int>> arr ={
                        {1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12}
                     };

    // colomwiseWave(arr);
    rowWiseWave(arr);

}