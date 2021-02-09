#include<stdio.h>
int main(){
	printf("Enter an integer to find out the no. of digits\n");
	int a;
	scanf("%d",&a);
	if(a<=999 && a >= 100){
		printf("it's a 3-digit integer");
	}
	else if(a<=9999 && a>=1000){
		printf("its's a 4-digit integer");
	}
	else if(a<=99999 && a>=10000){
		printf("it's a 5-digit integer");
	}
	else{
		printf("it's an invalid number");
	}
	return 0;
}