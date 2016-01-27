#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,a[101],min=0,max=0,k;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        min=(a[i]<=a[min])?i:min;
        max=(a[i]>a[max])?i:max;
    }
    k=max-min+n-1;
    k-=(max>min)?1:0;
    printf("%d",k);
    return 0;
}
