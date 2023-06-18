#include <stdio.h>

void rec_func(int);

void rec_func(int num){
    int result;

    if(num /10 !=0){
        rec_func(num/10);
    }
    result = num % 10;
    printf("%d\n",result);
}
int main(void){
    int num;

    scanf("%d",&num);
    rec_func(num);

    return 0;
}