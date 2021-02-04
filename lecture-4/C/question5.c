#include<stdio.h>
int main(){
	int a, d1, d2, d3, d4;
	printf("enter a 4-digit integer\n");
	scanf("%d", &a);
	d4 = a % 10;
	d3 = (a % 100) / 10;
	d2 = (a % 1000) / 100;
	d1 = a / 1000;
	printf("reverse value is %d\n",d4*1000+d3*100+d2*10+d1);
	return 0;
}