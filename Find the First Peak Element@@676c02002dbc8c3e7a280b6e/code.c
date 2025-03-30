#include <stdio.h>
int main()
{
    int N;
    int flag=0;
    scanf("%d",&N);
    int a[N];
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<N-1;i++)
    {
        if(a[i-1]<a[i] && a[i]>a[i+1])
        flag=a[i];
    }
    printf("%d",flag);
   return 0;
}