#include<stdio.h>
int main(){
	int a,d1,d2,d3,d4,d5;
	printf("enter a 5 digit number:\n");
	scanf("%d",&a);
	d1=a/10000;
	d2 = (a % 10000) / 1000;
	d3 = (a % 1000) / 100;
	d4 = (a % 100) / 10;
	d5 = a % 10;
	printf("1st pattern is : %d%d%d%d%d",d2,d1,d3,d5,d4);
	printf("\n2nd pattern is : %d%d%d%d%d",d4,d5,d3,d1,d2);
	printf("\n3rd pattern is : %d%d%d%d%d",d5,d4,d3,d2,d1);
	return 0;
}