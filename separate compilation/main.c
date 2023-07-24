#include <stdio.h>

void print_num(int);

int main(void){
    int x;

    printf("write any integer: ");
    scanf("%d",&x);
    print_num(x);
    return 0;
}