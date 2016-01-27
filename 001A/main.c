#include <stdio.h>
#include <stdlib.h>

int main()
{
    __int64 m,n,a;
    scanf("%I64d%I64d%I64d",&m,&n,&a);
    printf("%I64d",((m+(a-1))/a)*((n+(a-1))/a));
    return 0;
}
