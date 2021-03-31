#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000], b[1000];
    gets(a);

    int counter = -1;
    for (int i = 0; i < strlen(a) + 1; i++)
    {
        if (a[i] == ' ' || a[i] == '\0')
        {
            for (int j = i - 1, x = counter + 1; j > counter; j--, x++)
            {
                b[x] = a[j];
            }
            counter = i;
            b[i] = ' ';
        }
    }

    for (int i = 0; i < strlen(b); i++)
    {
        printf("%c", b[i]);
    }
    return 0;
}