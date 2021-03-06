#include <stdio.h>
int main()
{
    int c,d, a[8] = {1,2,9,6,7,8,6,4},b[8]={5,9,6,2,7,8,4,3};
    for (int i = 0, j = 8 / 2; i < 8 / 2; i++, j++)
    {
        c = a[i];
        a[i] = b[j];
        b[j] = c;

        d = b[i];
        b[i] = a[j];
        a[j] = d;
    }
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}