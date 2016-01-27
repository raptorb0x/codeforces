#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k,l,m,n,d,i,s=0;
    scanf("%d%d%d%d%d",&k,&l,&m,&n,&d);
    for (i=0;i<=d;i++)
    {
        //if(!(!(i/k)&!(i/l)&!(i/m)&!(i/n))) continue;
        if(i%k==0) continue;
        if(i%l==0) continue;
        if(i%m==0) continue;
        if(i%n==0) continue;
        s++;
        //printf("\n%d",i);

    }
    printf("%d",d-s);
    return 0;
}
