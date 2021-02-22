#include <stdio.h>
int main()
{
    int i = 5, n = 5;
    while (i >= 1)
    {
        printf("%d ", i);
        i--;
    }
    printf("\n");
    while (n > 2)
    {
        n--;
        printf("%d ", n);
    }
    return 0;
}