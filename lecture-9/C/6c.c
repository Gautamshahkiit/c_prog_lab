#include<stdio.h>
int main(){
    int n,sum=1;
    printf("enter an integer:\n");
    scanf("%d",&n);
    while(n>0){
        sum=sum*n;
        n--;
    }
    printf("factorial is %d",sum);
    return 0;
}