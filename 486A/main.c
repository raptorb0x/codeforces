#include <stdio.h>
#include <stdlib.h>

int main()
{
    __int64 n;
    scanf("%I64d",&n);
    printf("%I64d",(n%2==0)?n/2:-((n+1)/2));
    return 0;
}
