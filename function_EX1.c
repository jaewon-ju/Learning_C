#include <stdio.h>
double centi_to_meter(int);

int main(void){
    double res;

    res = centi_to_meter(187);
    printf("%.2lfm\n",res);

    return 0;
}

double centi_to_meter(int x){
    return (double)x/100;
}