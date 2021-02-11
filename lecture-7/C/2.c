#include<stdio.h>
int main(){
	int a, b, c, d, max, max1, max2;
	printf("Enter a 4 integers:\n");;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b && a>c && a>d){
		max=a;
	}
	else if(b>c && b>d){
		max=b;
	}
	else if(c>d){
		max=c;
	}
	else{
		max=d;
	}
	printf("maximum no. is %d",max);
	return 0;
}