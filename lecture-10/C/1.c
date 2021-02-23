#include<stdio.h>
int main(){
	int i=0,a,sum=0, sum3=0, sum5=0, sumr=0;
	printf("Enter 6 integers:\n");
	while(i<6){
		scanf("%d",&a);
		if (a%3==0 && a%5==0){
			sum+=a;
		}
		else if (a%3==0){
			sum3+=a;
		}
		else if(a%5==0){
			sum5+=a;
		}
		else{
			sumr+=a;
		}
		i++;
	}
	printf("sum of numbers divisible by 3 and 5 is %d\n", sum);
	printf("sum of numbers divisible by 3 is %d\n", sum3);
	printf("sum of numbers divisible by 5 is %d\n", sum5);
	printf("sum of rest of the numbers is %d\n", sumr);
	return 0;
}