#include<stdio.h>
int main(){
	int i=1,n,sum=1;
	printf("Enter an integer:\n");
	scanf("%d",&n);
	while(i<=10){
		sum=i*n;
		printf("%d X %d = %d\n",n,i,sum);
		i++;
	}
	return 0;
}