#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x,i,k=0;
    scanf("%d%d",&n,&x);
    for(i=1;i<=n;i++)
    {
        if ((x%i==0)&&(x/i<=n)) k++;
    }
    printf("%d",k);

    return 0;
}
