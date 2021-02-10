#include <stdio.h>
int main()
{	//a= 0110 0001
	//b= 0110 0010
	char a;
	int c, d ,i;
	printf("Enter an unsigned char:\n");
	scanf("%c",&a);
	c=a&0XF0;
	c=c>>4;
	
	//c=0000 0110
	d=a&0X0F;
	//d=0000 0010
	printf("the left and rigit 4-bits in hexa are %x & %x resp.\n",c,d);

	d<<4;
    i=d|c;
	// could show i's elft and right bit but wanted to use | operator.
    printf("after interchanging : %x resp.\n", i);
    return 0;
}