/* Take a 6 digit no
eg:- 12 96 45 73 
and them
like this way
73 + 54 + 96 + 21
*/

#include<stdio.h>
int main(){
    int a,b,c,d,e,f,g,h;
    printf("Write Value: ");
    scanf("%d",&a);
    b = a % 100;
    printf(" %d\n",b);//73
    c = (a/100)%10;
    printf("+%d",c);//50
    d = (a/1000)%10;
    printf("%d\n", + d);//4
    e = (a%1000000)/10000;
    printf("+%d\n",e);//96
    f = (a%10000000)/1000000;
    printf("+%d",f);//20
    g = a/10000000;
    printf("%d\n",+g);//1
    h = b + c*10+d + e + f*10 + g;
    printf("Addition of value: %d\n",h);
   return 0;
   
}