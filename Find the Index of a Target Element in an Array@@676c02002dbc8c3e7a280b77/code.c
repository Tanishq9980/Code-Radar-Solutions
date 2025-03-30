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

for(int i=0;i<N;i++)
{
    if(a[i]==T)
    {
        printf("%d",i);
    }
   
}
else 
return -1;

}