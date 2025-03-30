#include <stdio.h>
int main()
int N;
scanf("%d",&N);

int a[N];
for(int i=0;i<N;i++)
{
    scanf("%d",arr[i]);
}
int flag=1;

for(int i=0;i<N;i++)
{
    int sum=0;
    for(int j=0;j<N;j++){
    if(a[i]==a[j]){
        sum++;
    }

if(sum>N/2){
printf("%d",a[j]);
flag=0;
break;
}
}
}
if (flag){
    printf("-1");
}