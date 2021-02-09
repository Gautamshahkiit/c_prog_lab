#include<stdio.h>
int main(){
	printf("Enter an integer to find out the no. of digits\n");
	int a,b;
	scanf("%d", &a);
	if (a <= 999 && a >= 100)
	{
		b=(a%100)/10;
		printf("it's a 3-digit integer and it's middle digit is %d",b);

	}
	else if (a <= 9999 && a >= 1000)
	{
		b=(a%1000)/10;
		printf("its's a 4-digit integer and it's middle digits are %d",b);
	}
	else if (a <= 99999 && a >= 10000)
	{
		b = (a % 10000) / 100;
		printf("it's a 5-digit integer and it's middle digit is %d",b);
	}
	else
	{
		printf("it's an invalid number");
	}

	return 0;
}