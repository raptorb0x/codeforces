#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,s=0,a1,a2,a3;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf ("%d%d%d",&a1,&a2,&a3);
        if (a1+a2+a3>=2)
            s++;
    }
    printf("%d",s);
    return 0;
}
