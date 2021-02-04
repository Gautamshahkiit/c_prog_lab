#include<stdio.h>
int main(){
	float a,b,c;
	printf("enter two integers or rational numbers\n");            
	scanf("%f",&a);
	scanf("%f",&b);
	c=a*a*a+b*b*b+3*a*b*(a+b);
	printf("%f",c);
	return 0;
}