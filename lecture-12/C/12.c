#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i == 1 || i == 2 || i == 5)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
        }
        else
        {
            printf("*");
            for (int j = 1; j <= i - 2; j++)
            {
                printf("-");
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}