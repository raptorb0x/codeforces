#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,m,n,i,s=1,max=1,h1=-1,m1=-1;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d%d",&h,&m);
        if((h1==h)&&(m1==m)) {s++;}
        else
        {
            max=(s>max)?s:max;
            h1=h;
            m1=m;
            s=1;
            //printf("\n%d",max);
        }
    }
    max=(s>max)?s:max;
    printf("%d",max);
    return 0;
}
