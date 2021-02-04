#include<stdio.h>
int main(){
	float a;
	printf("enter any real number till 4 significant decimal places\n");
	scanf("%f",&a);
	int p1,ld,d1,x,y;
	d1=a*10000;
	x=d1;
	p1=x/100;
	ld=(x%100)/10;
	(ld>=5)?++p1:p1;
	printf("%f",p1/100.0);
	return 0;
}