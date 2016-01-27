#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,s=0,m=0;
    int a[100][2];
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d%d",&a[i][0],&a[i][1]);
        s=s-a[i][0]+a[i][1];
        if (s>m) m=s;
    }
    printf("%d",m);
    return 0;
}
