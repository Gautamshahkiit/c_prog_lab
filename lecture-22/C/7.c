#include <stdio.h>

void display(char chr, int col, int row)
{
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= col; j++){
            printf("%c ", chr);
        }
        printf("\n");
    }   
}

int main()
{
    printf("A B\n");
    display('*',3,2);
    printf("C D\n");
    display('-',4,2);
    printf("D E\n");
    display('+',5, 3);
    return 0;
}