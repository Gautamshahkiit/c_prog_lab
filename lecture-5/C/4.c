#include<stdio.h>
int main(){
	int a,d1,d2,d3,d4,r;
	printf("enter a 4-digit integer\n");
	scanf("%d",&a);
	d1=a/1000;
	d2=(a%1000)/100;
	d3=(a%100)/10;
	d4=a%10;
	r=d4*1000+d3*100+d2*10+d1;
/* 	printf("%d",r);
 */	(a==r)?printf("its a palindrome"):printf("its not a palindrome");
	return 0;
}