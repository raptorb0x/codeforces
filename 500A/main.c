#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,t,i,a,k=1;
    scanf("%d%d",&n,&t);
    for (i=0;i<n;i++)
    {
       scanf("%d",&a);
       if(i!=k-1) continue;
       k+=a;
       //printf("%d",k);
       if(k>=t) break;
    }
    k==t?puts("YES"):puts("NO");
    return 0;
}
