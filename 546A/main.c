#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,k,w;
    __int64 s=0,n;
    scanf("%d%I64d%d",&k,&n,&w);
    for(i=1;i<=w;i++)
        s+=i*k;
    printf("%I64d",(s<=n)?0:s-n);
    return 0;
}
