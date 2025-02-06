#include <stdio.h>

int main() {
    int CP,SP;
    scanf("%d %d",&CP,&SP);
    if(CP>SP)
    printf("Loss");
    else if(SP>CP)
    printf("Profit");
    else
    printf("No Profit No Loss");
    
    return 0;
}