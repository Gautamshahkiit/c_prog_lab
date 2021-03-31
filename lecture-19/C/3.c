#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000], b[1000];
    gets(a);
    gets(b);
    //strcat(a,b);
    int na = strlen(a);
    int nb = strlen(b);
    for (int i = 0; i < nb; i++)
    {
        a[na + i] = b[i];
    }
    for (int i = 0; i < strlen(a); i++)
    {
        printf("%c", a[i]);
    }
    return 0;
}