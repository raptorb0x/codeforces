#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,h[30],i,j,a[30],s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d%d",&h[i],&a[i]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            if(i==j) continue;
            (h[i]!=a[j])?:s++;
            //printf("%d %d %d \n",h[i],a[j],s);

        }
    printf("%d",s);
    return 0;
}
