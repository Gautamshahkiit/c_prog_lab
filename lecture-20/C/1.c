#include <stdio.h>
int main()
{
    float a = 3.14;
    float *ptr;
    ptr = &a;
    printf("%f", *ptr);
    return 0;
}