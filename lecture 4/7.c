/*  Take a 5 digit no 
eg:-19327
and print 91372, 27319 ,72391
*/


#include<stdio.h>
int main(){
    int a,b,c,d,e,f;
    printf("Write value: ");
    scanf("%d",&a);
    b = ((a%10000)/1000);
    printf("1.%d",b);
    c = a/10000;
    printf("%d",c);
    d = (a/100)%10;
    printf("%d",d);
    e = a%10;
    printf("%d",e);
    f = (a%100)/10;
    printf("%d\n",f);

// 2
   int g,h,i;
   g = a%100;
   printf("2.%d",g);
   h = (a%1000)/100;
   printf("%d",h);
   i = a/1000;
   printf("%d\n",i);

//3
   int k,l,m,n,o;
   k = a%10;
   printf("3.%d",k);
   l = (a%100)/10;
   printf("%d",l);
   m = (a/100)%10;
   printf("%d",m);
   n = ((a%10000)/1000);
   printf("%d",n);
   o = a/10000;
   printf("%d",o);
    return 0;
}