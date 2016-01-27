#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,ij,a,b;
    scanf("%d",&n);
    int d[n][n];
    for(i=0; i<n; i++)
    {

        for(j=0; j<n; j++)
            d[i][j]=0;
    }

    for (ij=0;ij<n*n;ij++)
    {
        scanf("%d %d",&a,&b);
        if(d[a-1][b-1]!=0)
            continue;
        printf("%d ",ij+1);
        for(i=0;i<n;i++)
        {

                 d[a-1][i]=1;
            d[i][b-1]=1;
        }
    }

    return 0;
}
