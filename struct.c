#include <stdio.h>

typedef struct cracker{
    int price;
    int calories;
} Craker;

int main(void){
    Craker c1;

    printf("write the price and calories of craker: ");
    scanf("%d %d",&c1.price,&c1.calories);
    printf("price: %dwon\n",c1.price);
    printf("calories: %dkcal",c1.calories);
    return 0;
}