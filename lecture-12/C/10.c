#include<stdio.h>
int main(){
    int n;
    printf("Enter an integer:\n");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        if (i==1 || i==2 || i==n){
            for(int j = 1; j<=i; j++){
                printf("*");
            }
        }
        else{
            printf("*");
            for(int j=1; j<=i-2;j++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}