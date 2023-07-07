#include <stdio.h>

int is_prime(int num);
int is_palindrome(int num);

int is_prime(int num){
    for(int i=2;i<=num;i++){
        if(i == num)
            return 1;
        else if(num % i == 0)
            return 0; 
    }
    return 0;
}

int is_palindrome(int num){
    int spilited_nums[8];
    int i = 0;

    while(num / 10 != 0){
        spilited_nums[i] = num % 10;
        num = num / 10;
        i++;
    }
    spilited_nums[i] = num;


    for(int k = 0; k <= i/2 ; k++){
        if(spilited_nums[k] != spilited_nums [i-k]){
            return 0;
        }
    }
    return 1;
}

int main(void){
    int num;
    int palindrome;

    scanf("%d",&num);

    while(1){
        if(is_palindrome(num)){
            if(is_prime(num))
                break;
        }
        num++;
    }
    printf("%d",num);

    return 0;
}