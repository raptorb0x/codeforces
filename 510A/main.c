#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            if(!(i%2)||(!((i-1)%4)&&j+1==m)||(!((i-3)%4)&&!j)) printf("#");
                else printf(".");
        printf("\n");
    }
    return 0;
}
