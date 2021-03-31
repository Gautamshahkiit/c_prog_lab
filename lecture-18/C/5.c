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
        printf("%c", b[i]);
    }
    return 0;
}