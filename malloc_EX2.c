#include <stdio.h>
#include <stdlib.h>

void Is_Prime(int num);

void Is_Prime(int num){
    int *pnum = (int *)malloc((num-1)*sizeof(int));
    int i = 0;

    if(pnum == NULL){
        printf("out of memory");
        exit(1);
    }

    while(i != (num-1)){
        pnum[i] = i+2;
        i++;
    }
    for(int i=0;i<num-1;i++){
        for(int j=i+1;j<num-1;j++){
            if(pnum[i] == 0)    break;
            if(pnum[j] % pnum[i] == 0){
                pnum[j] = 0;
            }
        }
        printf("%5d",pnum[i]);
        if((i+1)%5==0)  printf("\n");
    }
}
int main(void){
    int num;

    printf("write any num: ");
    scanf("%d",&num);
    Is_Prime(num);
}
