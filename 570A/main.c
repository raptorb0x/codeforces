#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i,a1,b1,c1,j,max=0,mj;
    scanf("%d%d",&n,&m);
    int a,b[100]={0};
    for (i=0;i<m;i++)
    {
        max=-1;
        for (j=0;j<n;j++)
        {
        scanf("%d",&a);
        if(a>max)
        {max=a;mj=j;}
        }
        b[mj]++;
    }
    //for (i=0;i<n;i++) printf(" %d",b[i]);
    max=0;
    for (i=0;i<n;i++)
        if(b[i]>b[max]) max=i;
    printf("%d",max+1);
    return 0;
}
