#include<stdio.h>
int main(){
    int n, m;
    printf("Enter any two integers: \n");
    scanf("%d%d",&n,&m);
    for( ;n>m ;n--){
        if (n%7==0 && n%18==0){
            printf("%d ",n);
        }
    }
    for ( ; n<m ; n++){
        if (n % 7 == 0 && n % 18 == 0){
            printf("%d ", n);
        }
    }
    return 0;
}