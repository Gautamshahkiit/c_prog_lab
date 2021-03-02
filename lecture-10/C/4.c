#include<stdio.h>
int main(){
	int i=2,n;
	printf("Enter an integer:\n");
	scanf("%d",&n);
	while(i<n){
		if(n%i!=0){
			i++;
		}
		else{
			break;
		}
	}
	if(i==n || n==2){
		printf("%d is a prime number.",n);
	}
	else{
		printf("%d is not a prime number.",n);
	}
	return 0;
}
//this code doesn't work for 0. we know its result, it's obvious.