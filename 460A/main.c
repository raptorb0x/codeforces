#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i,k;
    scanf("%d%d",&n,&m);
    for (i=1;n>0;i++)
        n=n-1+((i%m)?0:1);
    printf("%d",i-1);
    return 0;
}
