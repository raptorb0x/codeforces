#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,s=0,d=0,a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        s+=a;
        if(s<0) {d++;s=0;}

    }
    printf("%d",d);
    return 0;
}
