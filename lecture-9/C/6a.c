#include<stdio.h>
int main(){
    int i=1,sum=0;
    printf("sum from 1 to 10\n");
    while(i<=10){
        sum=sum+i;
        i++;
    }
    printf("%d\n", sum);
    return 0;
}