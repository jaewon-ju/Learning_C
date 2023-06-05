#include <stdio.h>
#include <string.h>

int main(void){
    char name[20];
    int a,b;

    printf("write your name\n");
    scanf("%s",name);
    printf("Your name is %s \n",name);
    printf("Write two numbers\n");
    scanf("%d%d",&a,&b);
    printf("first num: %d, second num:%d, sum of them is %d",a,b,a+b);
}