void bubblesort(int arr[],int N)
{
    for(int i=0;i<N-1;i++)
    {
        for(int j=0;j<N-1-i;j++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    
}
void printarray(int arr[],int N)
{
    printf("%d %d",arr[0],arr[N-1]);
}
#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,N)
    printarray(arr,N)

return 0;
}