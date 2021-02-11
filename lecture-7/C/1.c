#include<stdio.h>
int main(){
	int a, b, c, d, max, max1, max2,m,m1,m2;
	printf("enter 4 integers:\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);

	//using ternary operator
	max = (a>b && a>c)?a:(b>c?b:c);
	max1 = (a > b) ? (c > a ? a : (c > b ? c : b)) : (c > b ? b : (c > a ? c : a));
	max2=(d > max) ? max : (d > max1 ? d : max1);
	printf ("second max is %d\n",max2);

	//using if/else
	if (a>b && a>c){
		m=a;
	}
	else if(b>c){
		m=b;
	}
	else{
		m=c;
	}

	if (a>b){
		if(c>a){
			m1=a;
		}
		else if(c>b){
			m1=c;
		}
		else{
			m1=b;
		}
	}
	else {
		if (c>b){
			m1=b;
		}
		else if (c>a){
			m1=c;
		}
		else{
			m1=a;
		}
	}

	if (d>m){
		m2=m;
	}
	else if(d>m1){
		m2=d;
	}
	else{
		m2=m1;
	}
	printf("second max is %d\n", m2);
	return 0;
}