#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N];
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    for (int j=0;j<N-1;j++){
        for (int k=0;k<N-1;k++){
            if (a[k]>a[k+1]){
                int temp = a[k];
                a[k] = a[k+1];
                a[k+1] = temp;
            }
        }
    }
    printf("%d %d",a[0],a[N-1]);
    return 0;
}
