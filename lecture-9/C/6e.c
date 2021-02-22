#include<stdio.h>
int main(){
    float i = 1, n, sum = 0;
    printf("Enter an integer:\n");
    scanf("%f", &n);
    while (i <= n)
    {
        sum = sum + (1 / (i));
        i++;
    }
    printf("%f", sum);
    return 0;
}