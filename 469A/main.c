#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a[100],n,p,q,ai,bi;
    scanf("%d",&n);
    for (i=0;i<n;i++)
       a[i]=0;

    scanf("%d",&p);
    for (i=0;i<p;i++)
    {
        scanf("%d",&ai);
        a[ai-1]=1;
    }

    scanf("%d",&q);
    for (i=0;i<q;i++)
    {
        scanf("%d",&bi);
        a[bi-1]=1;
    }
    for (i=0;i<n;i++)
        if(!a[i])
        {
         puts("Oh, my keyboard!");
        return 0;
        }
    puts("I become the guy.");
    return 0;

}
