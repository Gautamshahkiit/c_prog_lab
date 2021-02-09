#include <stdio.h>
int main()
{
	int a, /* b, */ c, d, e, f;
	printf("enter an integer\n");
	scanf("%d", &a);
	/* 	b=a & 0X000000FF;
 */
	c = a & 0X00FF0000;
	c = c >> 8;
	d = a & 0X0000FF00;
	d = d << 8;
	e = a & 0XFF0000FF;
	/* 	e = e >> 24;
	printf("%x  %x  %x  %x",e,d,c,b);
 */
	f = e | c | d;
	printf("%x", f);
	return 0;
}