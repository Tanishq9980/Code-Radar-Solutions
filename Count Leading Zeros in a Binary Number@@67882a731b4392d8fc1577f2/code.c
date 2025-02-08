#include <stdio.h>

int main() {
    int x;
    int y=0;
    scanf("%d",&x);
    if((x&1)==1)
   { printf("31");
    return 1;}
    else
    while(!(x&1))
    {
        x<<=1;y++;
    }
    printf("%d",y);
    return 0;
}