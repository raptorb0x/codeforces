#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,k=0,t,l,s=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&t);
        if(!i) {l=t;continue;};
        if(l<=t) s++;
        else
        {
           k=(s>k)?s:k;
           s=1;
        }
        l=t;
    }
    k=(s>k)?s:k;
    printf("%d",k);
    return 0;
}
