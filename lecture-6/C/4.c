#include<stdio.h>
int main(){
/* 	0010  1011
	1100  1001

	0010  1100
	1011  1001

	0110  0001 a
	0110  0010 b

	0110  0110-102
	0001  0010-18
 */	
	char a,b,c,d,e,f,g,h;
	printf("enter any two char\n");
	scanf("%c",&a);
/* 	printf("%d\n", a);
 */	scanf("%c",&h);
/* 	printf("%d",h);
 */	
	b = a & 0XF0;
	//0110  0000
	c = a & 0X0F;
	//0000  0001
	c=c<<4;
	//0001  0000
	d = h & 0XF0;
	//0110  0000
	d=d>>4;
	//0000  0110
	e = h & 0X0F;
	//0000  0010
	f = b|d;
	//0110  0110--102
	g = c|e;
	//0001  0010--18
	printf("%d\n%d",f,g);
	return 0;
}