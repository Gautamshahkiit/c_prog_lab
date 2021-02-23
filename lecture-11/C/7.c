#include<stdio.h>
int main(){
    int i,n;
    float fact, a, sum = 0;
    printf("Enter an integer:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=1;
        for(a=2*i;a>1;a--){
            fact*=a;
        }
        sum+=(i/fact);
    }
    printf("%f",sum);
    return 0;
}