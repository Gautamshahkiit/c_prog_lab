#include<stdio.h>
int main(){
    int sum=0;
    int a[7]={2,9,6,4,8,7,2};
    for(int i=0;i<7;i++){
        if(a[i]%2!=0){
            sum+=a[i];
        }
    }
    printf("%d",sum);
    return 0;
}