#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sum=0,t, d, n, otv;
    scanf("%d%d",&n,&d);
    for(i=0;i<n;i++)
    {
    scanf("%d",&t);
    sum+=t;
    }

    if((sum+(n-1)*10)>d)
    {
        puts ("-1");
        return 0;
    }
    otv=((n-1)*2)+(d-(sum+(n-1)*10))/5;
    printf("%d",otv);
    return 0;
}
