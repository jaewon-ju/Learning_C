#include <stdio.h>
#include <string.h>

void swap(char* form, void* pa, void* pb);

void swap(char* form, void* pa, void* pb){
    if(strcmp(form,"int") == 0){
        int temp;
        temp = *(int *)pa;
        *(int *)pa = *(int *)pb;
        *(int *)pb = temp;
    } else {
        double temp;
        temp = *(double *)pa;
        *(double *)pa = *(double *)pb;
        *(double *)pb = temp;
    }
}
int main(void){
    int age1, age2;
    double height1, height2;

    printf("first person, age: ");
    scanf("%d",&age1);
    printf("first person, height: ");
    scanf("%lf",&height1);
    printf("second person, age: ");
    scanf("%d",&age2);
    printf("second person, height: ");
    scanf("%lf",&height2);

    swap("int",&age1,&age2);
    swap("double",&height1,&height2);

    printf("switched ages and heights: %d, %lf/ %d, %lf",age1,height1,age2,height2);
    return 0;
}