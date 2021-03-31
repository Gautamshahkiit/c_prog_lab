#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int x = a, t;
    while (x--)
    {
        t = 0;
        for (int i = 2; i <= x / 2; i++)
        {
            if (x % i == 0)
            {
                break;
            }
            if (i == x / 2)
            {
                printf("%d\n", x);
                t = 1;
            }
        }

        if (t == 1)
        {
            break;
        }
    }
    x = a;
    while (x++)
    {
        t = 0;
        for (int i = 2; i <= x / 2; i++)
        {
            if (x % i == 0)
            {
                break;
            }
            if (i == x / 2)
            {
                printf("%d", x);
                t = 1;
            }
        }

        if (t == 1)
        {
            break;
        }
    }
    return 0;
}