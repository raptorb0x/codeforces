#include <stdio.h>
#include <stdlib.h>

int main()
{
    __int64 x[100001];
    int n,i;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    scanf("%I64d",&x[i]);
    for(i=0;i<n;i++)
        {
        if(i==0) {printf("%I64d %I64d\n",x[1]-x[0],x[n-1]-x[0]); continue;}
        if(i==n-1){ printf("%I64d %I64d",x[n-1]-x[n-2],x[n-1]-x[0]); continue;}
        if(x[i+1]-x[i]<x[i]-x[i-1]) printf("%I64d ",x[i+1]-x[i]);
            else printf("%I64d ",x[i]-x[i-1]);
        if(x[n-1]-x[i]>x[i]-x[0]) printf("%I64d\n",x[n-1]-x[i]);
            else printf("%I64d\n",x[i]-x[0]);
    }//printf("Hello world!\n");
    return 0;
}
