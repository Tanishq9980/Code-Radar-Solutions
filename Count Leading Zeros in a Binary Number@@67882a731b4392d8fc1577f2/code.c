#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    printf("%d",x & (1>>31));
    return 0;
}