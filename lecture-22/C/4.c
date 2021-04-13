#include <stdio.h>

void display(int line, char chr)
{
    for(int i = 1; i <= line; i++){
        for(int j = 1; j <= i; j++){
            printf("%c ", chr);
        }
        printf("\n");
    }
}

int main()
{
    int line;
    char chr;
    scanf("%d%c", &line, &chr);
    display(line, chr);
    return 0;
}