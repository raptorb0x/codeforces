#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,m,a,j=1;
    __int64 s=0;
    scanf("%d%d",&n,&m);
    for (i=0; i<m; i++)
    {
        scanf("%d",&a);
        if(j<=a)
            s+=a-j;
        else
            s+=n-j+a;
        j=a;
       //printf("%I64d %d\n",s,j);
    }
    printf("%I64d",s);
    return 0;
}
