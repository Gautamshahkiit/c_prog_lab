#include<stdio.h>
int main(){
    int n;
    float i,sum=0;
    printf("Enter an integer:\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        sum = sum + (((4 * i) - 3) / ((4 * i) - 1));
    }
    printf("%f",sum);
    return 0;
}