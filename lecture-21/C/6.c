#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    char *ptr = a;
    int i = 0;
    while (i < 20)
    {
        scanf("%s", &a[i]);
        i = strlen(a);
    }
    for (int i = 0; i < strlen(a); i++)
    {
        printf("%c", a[i]);
    }
    return 0;
}