#include <stdio.h>
#include <math.h>
int main()
{
    int max = -pow(2, 31), min = pow(2, 31) - 1;
    int x;
    scanf("%d", &x);
    int a[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < x; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("%d", max - min);
    return 0;
}