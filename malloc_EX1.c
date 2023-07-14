#include <stdio.h>
#include <stdlib.h>

int main(void){
    int** matrix = (int**)malloc(4 * sizeof(int *));

    for(int i=0;i<4;i++){
        *matrix = (int *)malloc(sizeof(int)*5);
        if(i!=3){
            matrix ++;
        }
    }
    matrix -= 3;

    for(int i=0;i<4;i++){
           for(int j=0;j<5;j++){
                matrix[i][j] = i + j;
                printf("%5d",*(*(matrix + i)+j));
                if(j==4)    printf("\n");
        }
    }

    for(int i=0;i<4;i++){
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}