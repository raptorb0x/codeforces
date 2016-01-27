#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,s=0,s1=0;
    scanf("%d",&n);
    for (i=0;s<=n;i++)
    {
        s1+=i;
        s+=s1;

    }
    printf("%d",i-2);
    return 0;
}
