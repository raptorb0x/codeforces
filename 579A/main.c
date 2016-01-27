#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long u,i;
    int s=0;
    scanf("%lld",&u);
    for(i=2147483648;i>0;i=i/2)
        if(u&i)s++;

    printf("%d",s);
    return 0;
}
