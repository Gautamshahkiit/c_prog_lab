#include <stdio.h>
int main()
{
    int i = 0, n;
    printf("enter an integer\n");
    scanf("%d", &n);
    while (i <= n){
        printf("%d\n", i++);
    }
    return 0;
}