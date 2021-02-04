#include<stdio.h>
int main(){
	int a,ld,p1;
	printf("enter any 4digit integer\n");
	scanf("%d",&a);
	ld=a%10;
	p1=a/10;
	(ld>=5)?printf("%d",(++p1)*10):printf("%d",p1*10);
	return 0;
}