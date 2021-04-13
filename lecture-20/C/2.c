#include <stdio.h>
int main()
{
    int a = 10;
    int *b = &a;
    int **c = &b;
    //address of a
    printf("%d\n", &a);
    printf("%d\n", b);
    printf("%d\n", *c);
    //value of a
    printf("%d\n", a);
    printf("%d\n", *b);
    printf("%d\n", **c);
    //address of b
    printf("%d\n", &b);
    printf("%d\n", c);
    //value of b
    printf("%d\n", b);
    printf("%d\n", *c);
    //address of c
    printf("%d\n", &c);
    //value of c
    printf("%d\n", c);  
    return 0;
}