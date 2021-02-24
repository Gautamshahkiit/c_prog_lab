#include <stdio.h>
int main(){
    for (int i = 1; i <= 3; i++){
        for (int j = 1; j <= (3 - i); j++){
            printf(" ");
        }
        for (int j = 1; j <= i; j++){
            printf("1 ");
        }
        printf("\n");
    }
    for (int i = 1; i < 3; i++){
        for (int j = 1; j <= i; j++){
            printf(" ");
        }
        for (int j = 1; j <= 3-i; j++){
            printf("1 ");
        }
        printf("\n");
    }
    return 0;
}