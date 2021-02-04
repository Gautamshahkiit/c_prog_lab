#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter any 2 integers\n");
	scanf("%d\n%d", &a,&b);
	c = (a < b) ? a : b;
	printf("minm is %d",c);
	return 0;
}