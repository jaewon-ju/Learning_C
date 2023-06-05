#include <stdio.h>

int main(void){
    int a;
    char b;

    printf("write any integer\n");
    scanf("%d",&a);
    printf("write any character\n");
    // scanf("%c",&b); 이렇게 사용하게 되면, 문자 b는 입력받지 못하고 끝나버린다. 그 이유는 a를 입력받은 후 버퍼에 \n가 남아있어서이다.
    scanf(" %c",&b); //%c 앞에 공백을 넣어줌으로써 해결가능하다. 또는 getchar();로 \n을 가져가버리는 것도 가능하다.

    int c;
    char d[10];

    printf("write any integer\n");
    scanf("%d",&c);
    printf("write any sentense\n");
    scanf("%s",d);
    printf("%s, %d",d,c);
}