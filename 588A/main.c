#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,min=101,s=0,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        min=(b<min)?b:min;
        s+=a*min;
    }
    printf("%d",s);
    return 0;
}
