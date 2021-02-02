/*Take a 7 digit no and display its middle 3 digits
          a = 1964264
print only     [642] 
*/


#include<stdio.h>
int main(){
    int a,b,c,d,e,f;
    printf("Write Value: ");
    scanf("%d",&a);
    b = (a/10000)%10;
    printf("Middle 3 digit is %d",b);
    c = (a/1000)%10;
    printf("%d",c);
    d = (a/100)%10;
    printf("%d\n",d);
    return 0;
}