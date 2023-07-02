#include <stdio.h>

int main(void){
    char ch;
    int res;
    int length = 0;
    int max = 0;

    res = scanf("%c",&ch);

    while(res != -1){
        if(ch == '\n'){
            if(length > max){
                max = length;
                length = 0;
            }
            res = scanf("%c",&ch);
        }
        scanf("%c",&ch);
        length ++;
    }
    printf("max length: %d", max);
    return 0;
}