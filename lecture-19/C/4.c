#include<stdio.h>
#include<string.h>
int main(){
    char a[1000], b[1000];
    gets(a);
    gets(b);
    char temp;
    for(int i=0,j=strlen(a)-1;i<j;i++,j--){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    strcat(b,a);
    for(int i=0;i<strlen(b);i++){
        printf("%c",b[i]);
    }
    return 0;
}