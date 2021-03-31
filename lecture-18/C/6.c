#include <stdio.h>
int main()
{
    char a[1000], b[1000];
    int x = 0;
    gets(a);
    for (int i = 0; a[i] != 0; i++)
    {
        x++;
    }
    int temp;
    for (int i = 0; i < x; i++)
    {
        b[x - i - 1] = a[i];
    }
    for (int i = 0; i < x; i++)
    {
        if (a[i] == b[i])
        {
            if (i == (x - 1))
            {
                printf("True");
                break;
            }
            continue;
        }
        else
        {
            printf("False");
            break;
        }
    }
    return 0;
}