#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);

    int a[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
     int count=1;
     int count2=1;
    if(N==1){
        printf("%d",count);
        return 1;
    }
    for(int i=0;i<N-1;i++)
    {
        for(int j=0;j<N-1;j++)
        {
            if(a[j]>a[j+1]){

          int temp=a[j];
          a[j]=a[j+1];
          a[j+1]=temp;
        }
    }
   
for(int i=0;i<N-1;i++)

    if(a[i+1]-a[i]==1 || a[i+1]-a[i]==-1)
    {
count++;
count2=count;
    }
    else
    {
        count=1;
    }
    printf("%d",count2);

    return 0;
}}