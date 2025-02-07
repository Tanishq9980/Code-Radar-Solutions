#include <stdio.h>



int main() {
    int x;
    scanf("%d",&x);
    if(x<2)
    printf("Not Prime");
    else if(x%x==0)
    printf("Prime");
    else(x>=2);
        for(int i=2;i<x;i++)
        {
            if(x%i==0)
            {
                printf("Prime");
            }
        }
    return 0;
}