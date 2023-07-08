#include <stdio.h>

int main(void){
    int nums[5][6] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
    };


    int total;
    int rows = sizeof(nums)/sizeof(nums[0]);
    int cols = sizeof(nums[0])/sizeof(nums[0][0]);
    int i,j;

    for(i=0;i<rows-1;i++){
        for(j=0;j<cols-1;j++){
            nums[i][5] += nums[i][j];
            nums[4][j] += nums[i][j];
            nums[4][5] += nums[i][j];
        }

    }


    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%5d",nums[i][j]);
        }
        printf("\n");
    }

    return 0;
}