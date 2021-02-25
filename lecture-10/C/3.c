#include<stdio.h>
int main(){
	printf("the integers whose squares lie betn 1000 and 2500 are : ");
	int a,i=1;
	while (i<51){
		a=1;
		a=i*i;
		if (a>=1000 && a<=2500){
			printf("%d ",i);
		}
		i++;
	}
	return 0;
}