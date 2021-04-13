#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *ptr;
    ptr = &a[0];
    int sum = 0;
    for (int i = 0; i < 9; i++)
    {
        if (ptr[i] % 2 == 0)
        {
            sum += ptr[i];
        }
    }
    printf("%d", sum);
    return 0;
}