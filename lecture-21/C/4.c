#include <stdio.h>
#include <string.h>
int main()
{
    char arr[100];
    scanf("%s", arr);
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%s\n", arr + i);
    }
    for (int i = strlen(arr)-1; arr[i] >= 0; i--)
    {
        printf("%s\n", arr + i);
    }
    for (int i = 0 ; i<strlen(arr); i++){
        for(int j = strlen(arr)-1-i; j>=0; j--){
            printf("%c", arr[j]);
        }
        printf("\n");
    }
    return 0;
}