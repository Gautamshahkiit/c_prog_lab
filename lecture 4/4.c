// Take  4 digit Integer as user input and display
//each digits
//eg:- 9467

#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Write Value: ");
    scanf("%d",&a);
    b =  a/1000;
    printf("%d\n",b);
    c = (a/100)%10;
    printf("%d\n",c);
    d = (a/10)%10;
    printf("%d\n",d);
    e = a%10;
    printf("%d",e);
    return 0;
}