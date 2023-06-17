#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d",&n);
    for(int i=0;i<2*n-1;i++){
        if(i<n){
            for(int j=n;j>i+1;j--){
                printf(" ");
            }
            for(int k=0;k<2*i+1;k++){
                printf("*");
            }
            printf("\n");
        } else {
            for(int j=0;j<i-n+1;j++){
                printf(" ");
            }
            for(int k=2*i-2*n;k<2*n-3;k++){
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
