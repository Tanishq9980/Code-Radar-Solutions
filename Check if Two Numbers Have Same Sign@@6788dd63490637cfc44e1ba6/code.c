#include <stdio.h>


int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    if(x*y>0)
       printf("Same Sign");
    else if(x*y<0)
    printf("Different Sign");
    return 0;
}