#include<stdio.h>
int main(){
	int a,d1,d4,p1,p2,r;
	printf("enter  4-digit integer\n");
	scanf("%d",&a);
	d1 = a / 1000;
	p1 = (a % 1000) / 10;
	d4 = a % 10;
	p2 = d1 * 10 + d4;
	r=d4*10+d1;
/* 	printf("%d%d%d",p1,p2,r);
 */	(p1==p2||p1==r)?printf("its a valid number"):printf("its an invalid number");
	return 0;
}