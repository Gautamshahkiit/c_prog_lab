#include<stdio.h>
int main(){
    int a[7]={2,9,6,4,8,7,2};
    int sum = 0,n=a[6];
    for(int i =7-2;i>=0;i--){
        if(a[i]%n==0){
            sum+=a[i];
            printf("%d ",a[i]);
        }
    }
    printf("\n%d",sum);
}