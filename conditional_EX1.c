#include <stdio.h>

int main(void){
    int chest = 95;
    char size;

    if(chest <= 90){
        size = 's';
    } else if(chest <= 100){
        size = 'M';
    } else{
        size ='L';
    }

    printf("Your size is %c",size);
    return 0;
}