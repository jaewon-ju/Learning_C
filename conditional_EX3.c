#include <stdio.h>

int main(void){
    int firstNum;
    int secondNum;
    char operator;
    double result;

    printf("write four arithmetic operations(integer): ");
    scanf("%d%c%d",&firstNum,&operator,&secondNum);

    switch(operator){
        case '+':
            result = firstNum + secondNum;
            break;
        case '-':
            result = firstNum - secondNum;
            break;
        case '/':
            result = (double)firstNum / (double)secondNum;
            break;
        case '*':
            result = firstNum * secondNum;
            break;
        default:
            break;
    }
    printf("\n%lf",result);
}