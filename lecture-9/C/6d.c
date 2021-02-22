#include<stdio.h>
int main(){
    int n;
    unsigned long long sum = 1;
    printf("enter an integer:\n");
    scanf("%d",&n);
    while(n>0){
        sum=sum*n;
        n-=3;
    }
    printf("%llu",sum);
    return 0;
}