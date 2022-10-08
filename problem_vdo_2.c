// by using this code we can addition multi dimensional array's column and rows.
#include<stdio.h>

int main(){
    int arr[5][5]={{8,3,9,0,10},{3,5,17,1,1},{2,8,6,23,1},{15,7,3,2,9},{6,14,2,6,0}};
    int sum=0,mnw=0;
    printf("sum of rows: ");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            sum=sum+arr[i][j];
        }
        printf("%d ",sum);
        sum=0;
    }
    // int mnw=0;
    printf("\n");
    printf("sum of coloms: ");
    for(int i=0;i<5;i++){
        
        for(int j=0;j<5;j++){
            mnw=mnw+arr[j][i];
        }
        printf("%d ",mnw);
        mnw=0;
    }
    // printf("%d ",mnw);

}
