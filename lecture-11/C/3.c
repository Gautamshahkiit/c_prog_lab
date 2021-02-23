#include<stdio.h>
int main(){
    int n;
    printf("Enter an integer:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",i);
    }
    for(int i=n-1;i>=1;i--){
        printf("%d ",i);
    }
    return 0;
}