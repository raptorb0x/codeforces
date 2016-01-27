#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,d,n,k[3],z[3],s=0,iz=0,ik=0;
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        scanf("%d",&d);
        if (d%2)
            z[iz++]=i+1;
        else
            k[ik++]=i+1;
        //printf("%d %d %d\n",iz,ik,s);
        if(iz>1&&ik==1)
            s=(s)?:k[0];
        if(iz==1&&ik>1)
            s=(s)?:z[0];
        iz-=(iz==3)?1:0;
        ik-=(ik==3)?1:0;
        //printf("%d %d %d\n",iz,ik,s);
    }
    printf("%d",s);
    return 0;
}
