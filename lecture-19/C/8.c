#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    gets(a);
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[0] > '`')
        {
            a[0] -= ' ';
        }
        if (a[i] == ' ')
        {
            printf("%c", a[i]);
            i++;
            if (a[i] > '`')
            {
                a[i] -= ' ';
            }
        }
        printf("%c", a[i]);
    }
    return 0;
}