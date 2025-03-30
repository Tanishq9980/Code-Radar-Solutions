int N;
scanf("%d",&N);

int arr[N];
for(int i=0;i<N;i++)
{
    scanf("%d",arr[i]);
}

for(int i=0;i<n;i++)
{if(arr[i]<=arr[i+1])
flag=1;}
if(flag)
printf("Not Sorted");
else
printf("Sorted");
