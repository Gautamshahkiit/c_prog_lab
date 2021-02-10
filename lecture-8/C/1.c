#include<stdio.h>
int main(){
	int a;
	printf("Enter a year to find whether it's a leap year or not!\n");
	scanf("%d",&a);
	if (a<1000 || a>10000){
		printf("its an invalid year");
	}
	else if(a%4==0 && a%100!=0||a%400=0){
		printf("%d is a leap year",a);
	}
	else{
		printf("%d is not a leap year",a);
	}
	return 0;
}