/*write a program to display the decimal,octal, and hexadecimal
value ofa different integer type literal */


#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    printf("%d\n",a);//integer
    printf("%o\n",a); //octal
    printf("%x\n",a); //hexa-decimal
    printf("%c\n",a); //character
    return 0;
}