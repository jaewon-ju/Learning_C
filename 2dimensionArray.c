#include <stdio.h>

void print_ary(int (*pary)[4]);

void print_ary(int (*pary)[4]){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%5d",*(*(pary + i) + j));
        }
        printf("\n");
    }
}
int main(void){
    int ary[3][4] = {{4,3,2,1},{8,7,6,5},{12,11,10,9}}; 

    print_ary(ary);
    return 0;
}