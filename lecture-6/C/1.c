#include <stdio.h>
int main(){
    printf("enter any three integers\n");
    int a,b,c,min2;
    scanf("%d%d%d",&a,&b,&c);
    min2=(a<b)?(c<a?a:(c<b?c:b)):(c<b?b:(c<a?c:a));
    printf("second minm is %d",min2);
    return 0;
}