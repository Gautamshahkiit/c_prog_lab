#include<stdio.h>
int main(){
	int h1,m1,h2,m2,d,dh,dm;
	printf("enter hour and minute of time1 here\n");
	scanf("%d%d",&h1,&m1);
	printf("enter hour and minute of time2 here\n");
	scanf("%d%d", &h2, &m2);
	if (h1 < h2){
		printf("time1 is earlier");
	}
	else if(h1>h2){
		printf("time2 is earlier");
	}
	else{
		if(m1<m2){
			printf("time1 is earlier");
		}
		else if (m1>m2){
			printf("time2 is earlier");
		}
		else{
			printf("time1 & time2 is equal");
		}
	}
	m1=h1*60+m1;
	m2=h2*60+m2;
	if(m1<=m2){
		d=m2-m1;
	}
	else{
		d=m1-m2;
	}
	dh=d/60;
	dm=d%60;
	printf(" & the time difference is %d:%d",dh,dm);
	return 0;
}