//Take 4 digit integer 
//find its reverse value
// eg:- 9467
//      7649

#include<stdio.h>
#include<math.h>
int main(){
int a,b,c,d,e;
printf("Type a:");
scanf("%d",&a);
b = a%10;
c = (a/10)%10;
d = (a/100)%10;
e = (a/1000);
printf("reverse of a:%d%d%d%d",b,c,d,e);
return 0;
}