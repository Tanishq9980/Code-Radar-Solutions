#include <stdio.h>

int main() {
    int x;
    int y=0;
    scanf("%d",&x);
    while(!(x&1))
    {
        x<<=1;y++;
    }
    printf("%d",y);
    return 0;
}