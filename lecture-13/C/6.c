#include<stdio.h>
int main(){
    int n;
    printf("Enter an integer:\n");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            printf("%d ",i);
        }
        for(int k=0;k<(2*(n-i));k++){
            printf("  ");
        }
        for (int j = 1; j <= i; j++){
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}