#include<stdio.h>
int main(){
	printf("enter any integer\n");
	int a,b,c,d,e;
	scanf("%d",&a);
	b=a & 0X000000FF;
	printf("%x\n",b);
	c = a & 0X0000FF00;
	c = c >> 8;
	printf("%x\n", c);
	d = a & 0X00FF0000;
	d = d >> 16;
	printf("%x\n", d);
	e = a & 0XFF000000;
	e = e >> 24;
	printf("%x\n", e);
	return 0;
}