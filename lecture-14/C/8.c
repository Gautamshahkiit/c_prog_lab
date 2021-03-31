#include<stdio.h>
int main(){
    int x=0,y=1,sum=0,a[8];
    for(int i=0;i<=8;i++,x=y,y=sum){
        sum=x+y;
        a[i]=sum;
    }
    for(int i=0;i<8;i++){
        printf("%d ",a[i]);
    }
    return 0;
}