#include<stdio.h>
#include<math.h>

#define printf __mingw_printf
int main(){
	char a='x';
	short int b=11;
	int c=8;
	long d=12;
	long long e=22;
	float f=0.5;
	double g=0.64535;
	long double h=0.3848;
	unsigned char i='x';
	unsigned short int j=10;
	unsigned int k=8;
	unsigned long l=12;
	unsigned long long m=22;
	printf("%c \n",a);
	printf("%hd \n",b);
	printf("%d \n",c);
	printf("%ld \n",d);
	printf("%lld \n",e);
	printf("%f \n",f);
	printf("%lf \n",g);
	printf("%Lf \n",h);
	printf("%d \n",i);
	printf("%hu \n",j);
	printf("%u \n",k);
	printf("%lu \n",l);
	printf("%llu \n",m);
	return 0;
}
