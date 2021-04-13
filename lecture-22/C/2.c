#include <stdio.h>

int fact(int x)
{   
    if (x == 0 || x == 1){
        x = 1;
    }
    for (int i = x - 1; i>1; i--){
        x*=i;
    }
    return x;
}

int main()
{
    int x;
    scanf("%d", &x);
    if (x >= 0){
        printf("%d", fact(x));
    }
    else{
        printf("Factorial doesn't exist.\n");
    }
    return 0;
}