#include<stdio.h>
int main(){
	int a;
	printf("enter any integer type literal\n");
	scanf("%d",&a);
	printf("decimal of given integer is %d\n",a);
	printf("octal of given integer is %o\n", a);
	printf("hexadecimal of given integer is %x\n", a);
	printf("character  of given integer is %c\n", a);
	return 0;
}