#include <stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,12,14,15,18,10,11,16,13,17};
    int *ptr;
    ptr = arr;
    int max = 0, max2 = 0;
    for (int i = 0; i < 18; i++){
        if(ptr[i] > max){
            max2 = max;
            max = ptr[i];
        }
        else if(ptr[i]<max && ptr[i]>max2){
            max2 = ptr[i];
        }
    }
    printf("%d %d", max, max2);
    return 0;
}