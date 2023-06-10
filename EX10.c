#include <stdio.h>

int main(void){
    int hour, min, sec;
    double time = 0;
    
    printf("write any time");
    scanf("%lf",&time);
    printf("%.2lf hour means: ",time);
    hour = (int)time;
    time -= hour;
    time *= 60;
    min = (int)time;
    time -= min;
    time *= 60;
    sec = (int)time;

    
    printf("%dhour",hour);
    printf(" %dmin",min);
    printf(" %dsec",sec); //실수형을 사용했기 때문에 오차가 발생할 수 있다.
   

    printf("\n\n%d",(int)(3600 * (3.76 - 3 -0.75)));
    return 0;
}