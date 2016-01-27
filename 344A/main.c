#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,sum=,last,next;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        if (!i){scanf("%d",&last);continue;};
        scanf("%d",&next);
        next==last?:sum++;
        last=next;
    }
    printf("%d",sum?:1);
    return 0;
}
