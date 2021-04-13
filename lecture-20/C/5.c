#include<stdio.h>
int main(){
    int a=1,b=2;
    int *p= &a;
    int *q= &b;
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
    printf("%d %d",a,b);
    return 0;
}