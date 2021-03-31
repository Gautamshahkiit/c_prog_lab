#include<stdio.h>
int main(){
    char a[1000];
    int x = 0;
    gets(a);
    for (int i = 0; a[i] != 0; i++){
        x++;
    }
    int temp;
    for(int i=0,j=x-1; i<j; i++,j--){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for (int i =0; i<x; i++){
        printf("%c",a[i]);
    }
    return 0;
}