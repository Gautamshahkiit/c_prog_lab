#include<stdio.h>
int main(){
    int c,a[8]={1,9,6,7,8,4,3,2};
    for(int i=0,j=8/2;i<8/2;i++,j++){
        c=a[i];
        a[i]=a[j];
        a[j]=c;
    }
    for(int i=0;i<8;i++){
        printf("%d ",a[i]);
    }
    return 0;
}