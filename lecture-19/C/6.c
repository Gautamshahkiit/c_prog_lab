#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int x = a, l, m;
    while (x--)
    {
        if (x % 3 == 0 && x % 12 == 0)
        {
            l = x;
            break;
        }
    }
    x = a;
    while (x++)
    {
        if (x % 3 == 0 && x % 12 == 0)
        {
            //printf("%d", x);
            m = x;
            break;
        }
    }
    if (a - l < m - a)
    {
        printf("%d", l);
    }
    else if (a - l > m - a)
    {
        printf("%d", m);
    }
    else
    {
        printf("%d\n%d", l, m);
    }
    return 0;
}