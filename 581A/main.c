#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,s,d;
    scanf ("%d%d",&a,&b);
    s=(a>b)?b:a;
    d=(a>b)?(a-b)/2:(b-a)/2;
    printf("%d %d",s,d);
    return 0;
}
