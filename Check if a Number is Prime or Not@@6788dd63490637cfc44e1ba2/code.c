#include <stdio.h>



int main() {
    int x;
    scanf("%d",&x);
    if(x<1)
        printf("Not Prime");
    else
        for(int i=2;i<x;i++)
        {
            if(x%i==0)
            {
                printf("Not Prime");
                return 1;
            }
        };
    printf("Prime");
    return 0;
}