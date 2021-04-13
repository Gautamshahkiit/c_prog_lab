#include <stdio.h>

int gcd(int a, int b){
    if (a == 0){
        return b;
    }
    if (b == 0){
        return a;
    }
    if (a > b){
        return gcd(a - b, b);
    }
    return gcd(a, b - a);
}
int calculate(int *a, int num){
    int temp = gcd(a[0], a[1]);
    for(int i = 2; i < num; i++)
    {
        temp = gcd(a[i], temp);
    }
    return temp;
}

int main(){
    int a[5];
    for (int i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }
    printf("%d", calculate(a, 5));
    return 0;
}