#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=n;j>0;j--)
        {
            if(j>n-i) printf(" ");
            else printf("*");
        }
        printf("\n");
    }
    return 0;
}
