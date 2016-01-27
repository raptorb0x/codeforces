#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j,i,n,s,max=1,t=0;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        (a[i])?t++:0;
    }
    //printf("%d %d %d ",a[i],a[i-1],i);
    for(i=0;i<n;i++)
    {
        s=0;
        for (j=i;j<n;j++)
        {
        (a[j])?s++:s--;
        max=(s<max)?s:max;
        }
    }
    //printf("%d %d\n",max,t);
    printf("%d",t-max);
    return 0;
}
