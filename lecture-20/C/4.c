#include<stdio.h>
int main(){
    int a[]={0,1,2,3,4,5,6,7,8,9};
    int *p = &a[0];
    int *q = &a[9];
    int temp;
    for(;p<q;p++,q--){
        temp = *p;
        *p = *q;
        *q = temp;
    }
    for(int i = 0; i<9 ; i++){
        printf("%d ", a[i]);
    }
    return 0;
}