#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,a,b,s;
    scanf("%d%d%d%d",&n,&m,&a,&b);
    if((float)a<=(float)b/(float)m) { printf("%d",n*a); return 0;}
    if(n*a>=b&&n<=m) {printf("%d",b); return 0;}
    else printf("%d",((n/m)*b)+((((n%m)*a)>b)?b:((n%m)*a)));
    //printf("%d",((float)a<=(float)b/m)?n*a:((n>m)?(n/m)*b:1)+((((n%m)*a)>b)?b:(n%m)*a));
    return 0;
}
