#include <stdio.h>

int minm(int x, int y){
    if (x<y){
        return x;
    }
    else{
        return y;
    }
}

int main(){
    int x , y;
    scanf("%d%d", &x, &y);
    printf("%d", minm(x, y));
    return 0;
}