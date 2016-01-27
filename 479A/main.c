#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,m=0;
    scanf("%d%d%d",&a,&b,&c);
    m=(m<(a+b+c))?a+b+c:m;
    m=(m<(a+b*c))?a+b*c:m;
    m=(m<((a+b)*c))?(a+b)*c:m;
    m=(m<(a*b+c))?a*b+c:m;
    m=(m<(a*(b+c)))?a*(b+c):m;
    m=(m<(a*b*c))?a*b*c:m;


    printf("%d",m);
    return 0;
}
