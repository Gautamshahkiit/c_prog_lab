 /* write a program to find the ((a+b)^3)
//int,real type
*/

#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    
    scanf("%d %d",&a,&b);
    c=pow((a+b),3);
    printf("%d",c);
    float d,e,f;
    scanf("%f %f",&d,&e);
    f=pow((c+d),3);
    printf("%f",f);
    return 0;
}