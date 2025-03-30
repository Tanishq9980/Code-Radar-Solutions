#include <stdio.h>
int main()
{
    int N;
    int flag=0;
    scanf("%d",&N);
    int a[N];
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    for (int j=0;j<N-1;j++){
        if (a[j]>a[j+1]){
            flag=1;
            break;
        }
    }
    if (flag){
        printf("Not Sorted");
    }
    else{
        printf("Sorted");
    }
    return 0;
}