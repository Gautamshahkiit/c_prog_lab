#include <stdio.h>

int fact(int x)
{
    if (x == 0 || x == 1)
    {
        x = 1;
    }
    for (int i = x - 1; i > 1; i--)
    {
        x *= i;
    }
    return x;
}

double question(int x)
{
    double ans = 0.0;
    for (int i = x; i > 0; i -= 2)
    {
        ans += (1.0 / (fact(i)));
    }
    return ans;
}

int main()
{
    int x;
    scanf("%d", &x);
    if (x > 0)
    {
        printf("%lf", question(x));
    }
    else
    {
        printf("INVALID.\n");
    }
    return 0;
}