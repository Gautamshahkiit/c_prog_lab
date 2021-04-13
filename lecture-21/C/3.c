#include <stdio.h>
#include <string.h>
int main(){
    int arr[20];
    int *ptr = arr;
    int i = 0;
    while(i < 20)
    {
        scanf("%s", &ptr[i]);
        printf("%d", sizeof(arr));
        i = 21;
    }
    for (int j = 0; j < 20; j++)
    {
        printf("%s", arr[j]);
    }
    return 0;
}