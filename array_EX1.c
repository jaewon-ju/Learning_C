#include <stdio.h>

int main(void){
    char sentence[80];
    int count = 0;
    int size;

    printf("write a sentence: ");
    gets(sentence);

    size = sizeof(sentence)/sizeof(sentence[0]);
    
    for(int i=0;i<size;i++){
        if(sentence[i] >= 65 && sentence[i] <= 90){
            sentence[i] += 32;
            count ++;
        }
    }
    puts(sentence);
    printf("%d",count);

    return 0;
}