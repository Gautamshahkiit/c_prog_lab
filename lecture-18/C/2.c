#include <stdio.h>
int main()
{
    char a[50];
    int x = 0;
    gets(a);
    for (int i = 0; a[i] != 0; i++)
    {
        x++;
    }
    printf("%d", x);
    return 0;
}