#include <stdio.h>
#include <stdlib.h>
int gcd(int a,int b)
{
    int m=0,i,n=(a>b)?a:b;
    if(!a||!b) return 0;
    for(i=1;i<=n;i++)
        if((a%i==0) &&(b%i==0) &&(i>m))
        m=i;
    return m;
}
int main()
{
    int a,j,b,n,i,k=1    ;
    scanf("%d%d%d",&a,&b,&n);
    do
    {
    n-=gcd(a,n);
    k++;
    if(!n) break;
    n-=gcd(b,n);
    k++;
    }
    while(n);

    printf("%d",k%2);
    return 0;
}
