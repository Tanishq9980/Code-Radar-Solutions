#include <stdio.h>


int main() {
    int a,b;
     char c;
      scanf("%c",&c);
    scanf("%d %d",&a,&b);
    switch(c)
    {
        case '+':
        printf("%d",a+b);
        break;

        case '-':
        printf("%d",a-b);
        break;

        case '*':
        printf("%d",a*b);
        break;

        case '/':
        if(b==0)
        {printf("error");}
        else
        {printf("%d",a/b);}
        break;
        
        default:
        printf("error");
    }
     
    
    return 0;
}