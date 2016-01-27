#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min,max,n,i,s=0,d;
    scanf("%d",&n);
    scanf("%d",&d);
    min=max=d;
    for (i=0;i<n-1;i++)
    {
        scanf("%d",&d);
        if(d>max)
        {
            max=d;
            s++;
        }
        if(d<min)
        {
            min=d;
            s++;
        }
    }
    printf("%d",s);
    return 0;
}
