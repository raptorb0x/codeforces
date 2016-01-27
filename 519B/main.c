#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,x;
    __int64 a=0,b=0,c=0;
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        scanf("%d",&x);
        a+=x;
    }
    for (i=0; i<n-1; i++)
    {
        scanf("%d",&x);
        b+=x;
    }
    for (i=0; i<n-2; i++)
    {
        scanf("%d",&x);
        c+=x;

    }
    printf("%I64d\n%I64d",a-b,b-c);
    return 0;
}
