#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,t,i;
    //__int64 s=1;
    scanf("%d%d",&n,&t);
    if(t==10)
    {
        if(n==1)
        {
            puts("-1");
            return 0;
        }
        else
        {
            printf("%d",t);
            for(i=1; i<(n-1); i++)
            {
                printf("0");
            }
            return 0;
        }
    }
    for(i=0; i<n; i++)
    {
        //s*=10;
        printf("%d",t);
    }
    //printf("%I64d",s*t);
    return 0;
}
