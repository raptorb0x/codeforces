#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ep 0.000001
int cmp(const void *a,const void *b)
{
    return *(int*)a-*(int*)b;
}
int main()
{
    int a[1010],b,i,n,l;
    double max=0;
    scanf("%d%d",&n,&l);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(a[0]),cmp);
      for(i=1;i<n;i++)
    {
        if(a[i]-a[i-1]>max) max=a[i]-a[i-1];
    }

    if(max<2.0*(l-a[n-1])) max=2.0*(l-a[n-1]);
   if(max<2.0*(a[0])) max=2.0*a[0];

    printf("%.10lf",max/2.0);
    return 0;
}
