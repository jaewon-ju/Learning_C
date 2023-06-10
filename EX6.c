#include <stdio.h>

int main(void){
    int a, b, tot;
    double avg;

    printf("score of two subjects: ");
    scanf("%d%d",&a ,&b);
    tot = a + b;
    avg = tot / 2.0;
    printf("average : %.1lf",avg);

    return 0;
}