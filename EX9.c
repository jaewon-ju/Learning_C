#include <stdio.h>

int main(void){
    int seats = 70;
    int audience = 65;
    double rate;

    rate = (double)audience / (double)seats;
    printf("%.1lf%%", rate*100);
    return 0;
}