#include <stdio.h>
void rotateright(int a[],int N,int K){
    K=K%N;

   int temp[K];

   for(int i=0;i<K;i++)
   {
          temp[i]=a[N-K+i];
   }
   
   for(int i=N-1;i>=K;i--)
   {
         a[i]=a[i-K];
   }

   for(int i=0;i<K;i++)
   {
    a[i]=temp[i];
   }
}


int main()
{
    int N,K;
   
    scanf("%d",&N);
     
    int a[N];
   
    for(int i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
   
    scanf("%d",&K);

    rotateright(a,N,K);

    for(int i=0;i<N;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}