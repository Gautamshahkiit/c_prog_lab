#include<stdio.h>
int main(){
    int i=1,n,sum=0;
    printf("enter an integer\n");
    scanf("%d",&n);
    while(i<=n){
        sum=sum+i;
        i=i+2;
    }
    printf("sum till 1st n odd integers is %d",sum);
    return 0;
}