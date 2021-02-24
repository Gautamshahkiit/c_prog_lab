#include<stdio.h>
int main(){
    for(int i=1;i<=6;i++){
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