#include<stdio.h>
#include<math.h>
int main(){
    int nu;
    int coutn =0;
    int lv=0;
    printf("Enter the number for armstrong: ");
    scanf("%d",&nu);
    int num=nu;
    while(num!=0){
        num=num/10;
        coutn++;
    }
    while(nu!=0){
        int lst = nu%10;
        lv=lv+pow(lst,coutn);
        nu=nu/10;
    }
    printf("armstrong is: %d",lv);
}
