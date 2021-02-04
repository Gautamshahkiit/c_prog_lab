#include<stdio.h>
int main(){
	int a,d1,d2,d3,d4;
	printf("enter a 4-digit integer\n");
	scanf("%d",&a);
	d4=a%10;
	d3=(a%100)/10;
	d2=(a%1000)/100;
	d1=a/1000;
	printf("%d\n%d\n%d\n%d",d1,d2,d3,d4);
	return 0;
}