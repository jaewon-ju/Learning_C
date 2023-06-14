#include <stdio.h>

int main(void){
    int num;
    int i,j,k,r=0;
    int loop = 1;

    printf("write any integer which is 2 or over: ");
    scanf("%d",&num);


    for(i=2;i<=num;i++){
        for(j=2;j<=i;j++){
            if(i % j !=0){
                continue;
            }
            if(j == i){
                printf("%5d",j);
                r++;
                if(r==5){
                    printf("\n");
                    r=0;
                }
            }
            break;
        }
    }
}