#include<stdio.h>
int main(){
	int sum=1,n;
	printf("enter n no. of integers and terminate witn 0.\n");
	while(n>0){
		scanf("%d",&n);
		if (n%2==1){
			sum*=n;
		}
	}
	printf("product of odd numbers is %d",sum);
	return 0;
}