#include <stdio.h>
#include <string.h>

int main(void){
    char str[16];
    char str2[16];
    char* ps = str;

    printf("write any word: ");
    scanf("%s",str);
    strcpy(str2,str);

    if(strlen(str) > 5){
        ps += 5;
        for(int i=0; i < strlen(str)-5; i++){
            *ps = '*';
            ps++;
        }
    }
    printf("The word you put: %s, skipped word: %s",str2,str);
    return 0;
}