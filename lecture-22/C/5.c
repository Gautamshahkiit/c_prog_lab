#include <stdio.h>

int digits(int x)
{
    int cnt = 0;
    while(x > 0){
        x /= 10;
        cnt++;
    }
    return cnt;
}

int main()
{
    int x;
    scanf("%d", &x);
    printf("%d", digits(x));
    return 0;
}