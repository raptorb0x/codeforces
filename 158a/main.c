#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k,n,a[10],i,s=0;
    scanf("%d%d",&n,&k);
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    for (i=0;i<n;i++)
        if (a[i]>=a[k] && a[i]>0)
         s++;
    printf("%d",s);
}
