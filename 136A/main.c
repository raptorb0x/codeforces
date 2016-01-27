#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[101],n,i,p;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%d",&p);
        a[p]=i;
    }
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
