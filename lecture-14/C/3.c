#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n],b[n];
    for (int i = 0,j=17; i < n; i++,j+=2)
    {
        a[i]=j;
    }
    for(int i=0,j=17+(2*(n-1));i<n;i++,j-=2){
        b[i]=j;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
}