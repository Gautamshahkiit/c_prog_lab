#include<stdio.h>
int main(){
    int n,a,sum=0;
    scanf("%d",&n);
    for(a=1;sum<n;a++){
        sum+=a;
        if(sum>=n){
            break;
        }
    }
    
    int k=0;
    for (int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            if(i%2!=0){
                k++;
                printf("%d ",k);
            }
            else{
                k++;
                if(j==i){
                    for(int l=k,m=i;m>=1;l--,m--){
                        printf("%d ",l);
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}