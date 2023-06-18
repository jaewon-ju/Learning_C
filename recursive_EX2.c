#include <stdio.h>

int max(int, int input[20]);

int max(int n, int input[20]){
    int max_num;

    if(n==-1) return 0;
    if(input[n]-max(n-1,input)>0){
        max_num = input[n];
    } else {
        max_num = max(n-1,input);
    }
    return max_num;
}
int main(void){
    int n;
    int input[20];
    int max_num;

    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&input[i]);
    }
    max_num = max(n-1,input);
    printf("%d",max_num);

    return 0;
}