#include <stdio.h>

void lotto_input(int*);
void lotto_output(int*);

void lotto_input(int* plotto){
    int i,j;

    printf("write any num between 1~45\n");
    for(i=0;i<6;i++){
        int check = 0;
        
        printf("%d: ",i+1);
        scanf("%d",plotto);
        if(*plotto < 1 || *plotto > 45){
            printf("write correctly\n");
            i--;
            continue;
        }
        for(j=1;j<i+1;j++){
            if(*plotto == *(plotto-j)){
                printf("overlapped num\n");
                check = 1;
                break;
            }
        }
        if(check == 1){
            printf("write correctly\n");
            i--;
            continue;
        }
        plotto++;
    }
}

void lotto_output(int* plotto){
    for(int i=0;i<6;i++){
        printf("%5d",*(plotto+i));
    }
}

int main(void){
    //lotto

    int lotto[6];

    lotto_input(lotto);
    lotto_output(lotto);

    return 0;
}