#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *ptr = a;
    int *rev = a;
    for (int i = 0; i < 9; i++)
    {
        printf("%d ", ptr[i]);
    }
    for (int i = 9 - 1; i >= 0; i--)
    {
        printf("%d ", rev[i]);
    }

    return 0;
}