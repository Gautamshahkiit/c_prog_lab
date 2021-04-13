#include <stdio.h>

int cal(int *a, int num){
    int max, sum = 0;
    for(int i = 0; i < num; i += 2){
        if(a[i] > a[i + 1]){
            max = a[i];
        }
        else{
            max = a[i + 1];
        }
        sum += max;
    }
    return sum;
}

int main(){
    int a[10];
    for (int i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }
    printf("%d", cal(a, 10));
    return 0;
}