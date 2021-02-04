#include<stdio.h>
int main(){
	printf("Enter 6 integers\n");
	int a,b,c,d,e,f,x,y,z;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	x=(a<b && a<c)?a:(b<c)?b:c;
	y=(d<e && d<f)?d:(e<f)?e:f;
	z=(x<y)?x:y;
	printf("%d\n",z);
	return 0;
}