#include <stdio.h>

int sum(int *a, int num){
    int sum = 0;
    for(int i = 0; i < num; i++){
        if(a[i] % 2 == 0){
            sum += a[i];
        }
    }
    return sum;
}

int main(){
    int a[5];
    for(int i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }
    printf("%d", sum(a, 5));
    return 0;
}