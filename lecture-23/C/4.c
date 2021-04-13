#include <stdio.h>
#include <string.h>

int cal(char *a){
    return strlen(a);
}

int main(){
    char a[1000];
    gets(a);
    printf("%d", cal(a));
    return 0;
}