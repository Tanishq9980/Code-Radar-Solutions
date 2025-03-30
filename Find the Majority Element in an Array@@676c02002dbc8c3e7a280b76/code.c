#include <stdio.h>
int main()
int n;
scanf("%d",&n);

int a[n];
for(int i=0;i<n;i++)
{
    scanf("%d",arr[i]);
}
int flag=0;

for(int i=0;i<n;i++)
{
    int sum=0;
    for(int j=0;j<n-1;j++){
    if(a[i]==a[j]){
        sum++;
    }
}
if(sum>N/2){
printf("%d",a[j]);
flag=0;
break;
}
}
if (flag){
    printf("-1");
}