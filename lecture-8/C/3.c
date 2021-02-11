#include<stdio.h>
int main(){
	float a, b, c,t,tp;
	printf("Enter the prices to three items:\n");
	scanf("%f%f%f",&a,&b,&c);
	t=a+b+c;
	if (a+b+c>=6000){
		if(a+b>=5000 || b+c>=5000 || a+c>=5000){
			tp=(1-0.4-0.1)*t;
			printf("you got 50%% discount, amount to be paid = %f",tp);
			}
		else {
			tp=(1-0.4)*t;
			printf("you got 40%% discount, amount to be paid = %f",tp);
		}
	}
	else if(a+b+c>=4000){
		if(a+b>=3000 || b+c>=3000 || a+c>=3000){
			tp=(1-0.3-0.1)*t;
			printf("you got 40%% discount, amount to be paid = %f", tp);
		}
		else{
			tp = (1 - 0.3) * t;
			printf("you got 30%% discount, amount to be paid = %f", tp);
		}
	}
	else if(a+b+c>=2000){
		tp=(1-0.2)*t;
		printf("you got 20%% discount, amount to be paid = %f", tp);
	}
	else{
		tp=t;
		printf("amount to be paid = %f", tp);
	}
	return 0;
}