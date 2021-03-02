#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer:\n");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        if(i%2==0){
            for(int j=1 ; j<=i; j++){
                printf("%d",j);
            }
        }
        else{
            for(int j=1; j<=i;j++){
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}