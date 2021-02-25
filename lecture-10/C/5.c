#include<stdio.h>
int main(){
	int i=1,n;
	float sum=0;
	printf("enter an integer:\n");
	scanf("%d",&n);
	while(i<=n+1){
		int j = 1, fact=1 ;
		while(j<=i-1){
			fact*=j;
			j++;
		}
		sum+=((i*1.0)/fact);
		i++;
	}
	printf("%f",sum);
	return 0;
}