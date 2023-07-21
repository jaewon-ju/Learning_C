#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getWords(FILE* fp, char** words);

void getWords(FILE* fp, char** words){
    int i=0;
    int res = 0;
    
    for(int i=0;i<10;i++){
        
        words[i] = (char *)malloc(20);
        if(res == EOF){
            break;
        }
        res = fscanf(fp,"%s",words[i]);
        printf("%s\n",words[i]);
    }
    fclose(fp);
}

int main(void){
    FILE *fa, *fb, *fc;
    char* Awords[10];
    char* Bwords[10];
    char* Cwords[10];
    int res = 0;

    fa = fopen("a.txt","r");
    fb = fopen("b.txt","r");
    fc = fopen("c.txt","w");

    if(fa == NULL || fb == NULL){
        printf("error");
    }

    getWords(fa,Awords);
    getWords(fb,Bwords);
    
    for(int i=0;i<10;i++){
        res = 0;
        Cwords[i] = (char *)malloc(20);
        
        for(int j=0;j<10;j++){
            if(strcmp(Bwords[i],Awords[j]) == 0){
                res = 1;
                break;
            }
        }
        if(res == 0){
            strcpy(Cwords[i],Bwords[i]);
            fputs(Cwords[i],fc);
            fputc('\n',fc);
        }
    }
    fclose(fc);
    return 0;
}
