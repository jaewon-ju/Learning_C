#include <stdio.h>

int main(void)
{
    int i, j, k;

    for(i = 0; i < 4 ; i++)
    {
        for(k=1; k< 4-i; k++)
        {
            printf(" ");
        }
        for(j=0;j < 2*i+1;j++)
        {   
            printf("*");
        }
        printf("\n");
    }   
    return 0;
}