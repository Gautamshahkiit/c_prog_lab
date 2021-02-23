#include<stdio.h>
int main(){
    for(int i=1,n=10; i<=n; i++,n--){
        printf("%d %d ",i,n);
    }
    return 0;
}