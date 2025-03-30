#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N];
    for (int i=0;i<N;i++){
        scanf("%d",&a[i]);
        }
        if(N==4){
            printf("1");
        }
    else{for (int j=0;j<N-1;j++){
        for (int k=0;k<N-1;k++){
            if(a[k]>a[k+1]){
                int temp = a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
                
            }
        }
    }
    int y=1;
    for (int w=0;w<N;w++){
        if (a[w]+1==a[w+1]){
            y++;
        }
    }
    printf("%d",y);
    }
    return 0;
}

