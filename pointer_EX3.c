#include <stdio.h>

void input_ary(double* pa, int size);
double find_max(double* pa, int size);

void input_ary(double* pa, int size){
    for(int i=0;i<size;i++){
        printf("write any num :");
        scanf("%lf",pa++);
    }
}

double find_max(double* pa, int size){
    double max = pa[0];

    for(int i=1;i<size;i++){
        if(pa[i] > max) max = pa[i];
    }

    return max;
}
int main(void){
    double ary[5];
    double max;
    int size;

    size = sizeof(ary) / sizeof(ary[0]);
    input_ary(ary,size);
    max = find_max(ary,size);

    printf("%lf",max);
    return 0;
}