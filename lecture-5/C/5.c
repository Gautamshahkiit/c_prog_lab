#include<stdio.h>
int main(){
	int a,d1,p1,d4,p2;
	printf("enter a 4 digit integer\n");
	scanf("%d",&a);
	d1=a/1000;
	p1=(a%1000)/10;
	d4=a%10;
	p2=d1*10+d4;
/* 	printf("%d",p);*/	
	((p1*p1)==p2) ? printf("its a valid number") : printf("its not a valid number");
	return 0;
}