#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int s=0,max,c[100001]={0},a,b[100001]={0},n,i;
    scanf("%lld",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%lld",&a);
        b[a]++;
    }
    c[0]=0;
    c[1]=b[1];
    for(i=2;i<=100000;i++)
        c[i]=(c[i-1]>c[i-2]+b[i]*i)?c[i-1]:c[i-2]+b[i]*i;
    printf("%lld",c[100000]);
}
