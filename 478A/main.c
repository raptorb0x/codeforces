#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,n;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    a+=b+c+d+e;
    //for(a=0;a<20;a++)
    if (a%5||!a) puts("-1");
    else printf("%d",a/5);
    return 0;
}
