#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,q,o,s=0;
    scanf ("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d%d",&q,o);
        s+=((n-o)>=2)?1:0;
    }
    printf("%d",s);
    return 0;
}
