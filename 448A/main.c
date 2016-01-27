#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,a1,a2,a3,b,b1,b2,b3,k,d;
    scanf("%d%d%d",&a1,&a2,&a3);
    a=a1+a2+a3;
    scanf("%d%d%d",&b1,&b2,&b3);
    b=b1+b2+b3;
    scanf("%d",&d);
    k=(a%5)?(a/5)+1:a/5;
    k+=(b%10)?(b/10)+1:b/10;
    (k<=d)?puts("YES"):puts("NO");
    return 0;
}
