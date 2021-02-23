#include<stdio.h>
int main(){
    int a=0,b=1,c,n;
    printf("enter an integer to see fibonacci series till that number:\n");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for( ; c<n; a=b,b=c){
        c=a+b;
        printf("%d ",c);
    }
    return 0;
}