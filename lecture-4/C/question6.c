#include<stdio.h>
int main(){
	int a, d3, d4,d5;
	printf("enter a 7-digit integer\n");
	scanf("%d", &a);
	d5 = (a % 1000)/100;
	d4 = (a % 10000)/1000;
	d3 = (a % 100000) /10000;
	printf("its middle 3 integers are %d  %d  %d",d3,d4,d5);
	return 0;
}