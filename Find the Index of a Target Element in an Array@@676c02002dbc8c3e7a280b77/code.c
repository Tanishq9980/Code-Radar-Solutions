#include <stdio.h>
int main(){
int N;
scanf("%d",&N);

int a[N];
for(int i=0;i<N;i++)
{
    scanf("%d",&a[i]);
}

int T;
scanf("%d",&T);

int flag = 1;
for(int i=0;i<N;i++)
{
    if(a[i]==T)
    {
     printf("%d",i); 
        flag=0;
        break;
    }
   
}
if(flag)
{
    printf("-1");
}

}