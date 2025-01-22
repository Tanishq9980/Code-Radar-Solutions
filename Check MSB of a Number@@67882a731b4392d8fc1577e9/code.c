#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    int a<<31;
    if (a & 1)
    printf("Set");
    else
    printf("Not Set");
    return 0;
}