#include <stdio.h>



int main() {
    int feur;
    int rep=0;
    scanf("%i",&feur);
    while(!(feur&1))
    {feur>>=1;
    ++rep;}
    printf("%i",rep);
    return 0;
}