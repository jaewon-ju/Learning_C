#include <stdio.h>

int main(void){
    double weight, height;
    double BMI;

    printf("write your weight(kg): ");
    scanf("%lf",&weight);
    printf("write your height(cm): ");
    scanf("%lf",&height);
    
    height /= 100;
    BMI = weight / (height * height) ;

    printf("weight: %.2lf, height: %.4lf",weight,height);
    printf("\n%s",BMI >= 20 && BMI < 25 ? "regular" : "irregular");

    return 0;
}