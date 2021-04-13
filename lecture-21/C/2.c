#include <stdio.h>
int main()
{
    int arr[20];
    int *ptr = arr;
    for (int i = 0; i < 20; i += 5)
    {
        scanf("%s", &ptr[i]);
    }
    for (int i = 0; i < 20; i += 5)
    {
        printf("%s ", &ptr[i]);
    }
    return 0;
}