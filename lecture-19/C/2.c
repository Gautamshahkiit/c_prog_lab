#include<stdio.h>
#include<string.h>
int main(){
    char a[1000];
    gets(a);
    int na=0;
    // printf("%d",strlen(a));
    for(int i=0; a[i]!='\0'; i++){
        na++;
    }
    printf("%d",na);
    return 0;
}