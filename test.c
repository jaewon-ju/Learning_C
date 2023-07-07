#include <stdio.h>

int main(void){
    int num;

    scanf("%d",&num);

    for(int i=2;i<=num;i++){
        if(i == num)
            printf("prime num");
        else if(num % i == 0){
            printf("not prime");
            break;
        }
    }
    return 0;
}