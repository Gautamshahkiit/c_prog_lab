#include<stdio.h>
int main(){
    int n, a, sum = 0;
    scanf("%d", &n);
    for (a = 1; sum < n; a++){
        sum += a;
        if (sum >= n){
            break;
        }
    }
    int k=1;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",k);
            k++;
            if (k>n){
                break;
            }
        }
        printf("\n");
    }
    return 0;
}