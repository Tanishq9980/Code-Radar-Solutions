#include <stdio.h>


int main() {
    int N;
    scanf("%d",&N);
    for (int i=1;i<=N;i++)
    {
        for(int j=0;j<N-i+1;j++)
        {
            printf("%c ",'A'+j);
        }
        printf("\n");
    }
  
    return 0;
}