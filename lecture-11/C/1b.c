#include <stdio.h>
int main(){
    int n;
    printf("enter an integer: \n");
    scanf("%d", &n);
    for ( ; n>=1; n--){
        printf("%d ", n);
    }
    return 0;
}