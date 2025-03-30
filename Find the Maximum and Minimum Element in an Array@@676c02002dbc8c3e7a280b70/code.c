int bubblesort(int arr[],int N)
{
    for(int i=0;i<N-1;i++)
    {
        for(int j=0;j<N-1-i;j++)
        {
            if(a[i]>a[i+1])
            {
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
}
printarray(int arr[],int N)
{
for(int i=0;i<N;i++)
{
    return arr[i];
    printf("%d %d",arr[0],arr[n-1]);

}
}

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


}