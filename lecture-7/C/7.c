#include<stdio.h>
int main(){
	int d1,m1,y1,d2,m2,y2,d,dd,dm,dy;
	printf("DATE1: enter date, then month and then year\n");
	scanf("%d%d%d",&d1,&m1,&y1);
	printf("DATE2: enter date, then month and then year\n");
	scanf("%d%d%d", &d2, &m2, &y2);
	if(y1<y2){
		printf("%d/%d/%d is earlier",d1,m1,y1);
	}
	else if(y1>y2){
		printf("%d/%d/%d is earlier",d2,m2,y2);
	}
	else{
		if(m1<m2){
			printf("%d/%d/%d is earlier", d1, m1, y1);
		}
		else if(m1>m2){
			printf("%d/%d/%d is earlier", d2, m2, y2);
		}
		else{
			if(d1<d2){
				printf("%d/%d/%d is earlier", d1, m1, y1);
			}
			else if(d1>d2){
				printf("%d/%d/%d is earlier", d2, m2, y2);
			}
			else{
				printf("%d/%d/%d & %d/%d/%d are same", d1, m1, y1, d2, m2, y2);
			}
		}
	}
	d1=y1*365+m1*30+d1;
	d2=y2*365+m2*30+d2;
	
	if(d1<=d2){
		d=d2-d1;
	}
	else{
		d=d1-d2;
	}
	dy=d/365;
	dm=(d%365)/30;
	dd=(d%365)%30;
	printf(" & the difference is %d days %d months %d years",dd,dm,dy);
	return 0;
}