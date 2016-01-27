#include <stdio.h>
#include <stdlib.h>

int main()
{
    __int64 n,k;
    scanf("%I64d%I64d",&n,&k);
   // if (!(n%2)) k=(k<=n/2)?1+2*(k-1):2*(k-n/2);
    //    else k=(k<=(n+1)/2)?1+2*(k-1):2*(k-(n+1)/2);
    k=(k<=(!(n%2)?n:n+1)/2)?1+2*(k-1):2*(k-(!(n%2)?n:n+1)/2);
    printf("%I64d",k);
    return 0;
}
