#include <stdio.h>

void line_up(double num[3]);
void swap(double*, double*);

void line_up(double num[3]){
    if(num[0] > num[1]) swap(&num[0],&num[1]);
    if(num[0] > num[2]) swap(&num[0],&num[2]);
    if(num[1] > num[2]) swap(&num[1],&num[2]);
}
void swap(double* pa, double* pb){
    double temp;

    temp = *pb;
    *pb = *pa;
    *pa = temp;
}

int main(void){
    double num[3];

    for(int i=0;i<3;i++){
        printf("write num: ");
        scanf("%lf",&num[i]);
    } 

    line_up(num);
    
    for(int i=0;i<3;i++){
        printf("%lf\n",num[i]);
    }
    return 0;
}