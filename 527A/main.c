#include <stdio.h>
#include <stdlib.h>

int main()
{
    __int64 a,b,c=0;
    scanf("%I64d %I64d",&a,&b);
    while(a>0 && b>0)
    {
        if (a>b)
        {
            c+=a/b;
            a%=b;
        }
        else
        {
            c+=b/a;
            b%=a;
        }
    }
    printf("%I64d",c);
    return 0;
}
