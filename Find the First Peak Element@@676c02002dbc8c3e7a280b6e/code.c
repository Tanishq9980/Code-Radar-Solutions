#include <stdio.h>
int main()
{
    int N;

    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
if(a[0]>a[1]) return arr[0];

    for(int i=1;i<N-1;i++)
    {
        if(a[i-1]<a[i] && a[i]>a[i+1])
        return arr[i];
    }
    

    if(arr[N-1]>arr[N-2]) return arr[N-1];
   
   return -1;
}