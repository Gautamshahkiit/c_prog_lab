#include<stdio.h>
int main(){
	printf("enter an integer\n");
	int a;
	scanf("%d",&a);
	if(a>0){
		printf("it's a positive number");
	}
	else if(a<0){
		printf("it's a negative number");
	}
	else{
		printf("it's a neutral number");
	}
/* 	printf("%d",a);
 */	return 0;
}