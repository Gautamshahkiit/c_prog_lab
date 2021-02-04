#include<stdio.h>
int main(){
	int a, d1,d2,p2,d5,d6,p4,sum;
	printf("enter a 8-digit integer\n");
	scanf("%d", &a);
	d1 = a / 10000000;
	d2 = (a % 10000000) / 1000000;
	p2 = (a % 1000000) / 10000;
	d5 = (a % 10000)/1000;
	d6 = (a % 1000)/100;
	p4 = a%100;
	printf("%d\n%d\n%d\n%d", p4, d6 * 10 + d5, p2,d2*10+d1);
	sum= p4+(d6*10+d5)+p2+(d2*10+d1);
	printf("\nthe summ is %d",sum);
	return 0;
}