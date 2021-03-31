#include <stdio.h>
int main()
{
    char a[50];
    int x = 0, y = 0;
    scanf("%[^\n]s",a);
    for (int i = 0; a[i] != 0; i++)
    {
        if (a[i] == ' '){
            x++;
    }
        else{
            y++;
        }
    }
printf("%d  %d", x, y);
return 0;
}