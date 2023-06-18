#include <stdio.h>

int sum(int);

int sum(int num){
    int result;
    
    if(num==0)
        return 0;
    result = num + sum(num-1);
    return result;
}
int main(void){

    printf("1+...+10=%d\n",sum(10));
    printf("1+...+100=%d\n",sum(100));
    return 0;
}
