#include <stdio.h>

void calculate(int a, int b, int c, float *avg, int *max, int *min){
    *avg = (a + b + c)/3.0;
    *max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    *min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
}

int main(){
    int a, b, c, max, min;
    float avg;
    scanf("%d%d%d", &a, &b, &c);
    calculate(a, b, c, &avg, &max, &min);
    printf("%f %d %d", avg, max, min);
    return 0;
}