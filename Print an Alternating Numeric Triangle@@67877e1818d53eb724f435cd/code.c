#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=i;j++)
        {
            int sum=i+j;
            if(sum&1==1)
            {
                printf("0 ");
            }
            else
            printf("1 ");
        }
        printf("\n");
    }
   
    return 0;
}