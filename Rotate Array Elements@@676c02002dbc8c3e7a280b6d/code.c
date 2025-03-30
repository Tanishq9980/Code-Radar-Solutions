int main()
{
    int N,K;
    scanf("%d",&N);
    int a[N];
    for (int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&K);
    a[N]=a[N+K];
    for (int j=N-1; j>=0; j--){
        a[j+K] =a[j];
    }
    for (int p=0;p<K;p++){
        a[p] = a[N+p];
    }
    for (int w=0;w<N;w++){
        printf("%d ",a[w]);
    }
    return 0;
}

