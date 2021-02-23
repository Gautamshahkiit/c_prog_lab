#include<stdio.h>
int main(){
    int n;
    float i,sum=0;
    printf("Enter an integer:\n");
    scanf("%d",&n);
    for(i=1; i<=n; i+=2){
        sum=sum+(i/(i+2));
    }
    printf("%f",sum);
    return 0;
}