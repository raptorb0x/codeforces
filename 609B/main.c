#include <stdio.h>
#include <stdlib.h>

int main()
{
    __int64 s=0,d=0;
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int a[10]={0},b;
    for (i=0;i<n;i++)
    {
        scanf("%d",&b);
        a[b-1]++;
    }
    for (i=0;i<m;i++)
        d+=a[i];
    for (i=0;i<m-1;i++)
    {

        d-=a[i];
        s+=a[i]*d;
    }
    printf("%I64d",s);
    return 0;
}
