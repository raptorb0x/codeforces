#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
        if(((n-i)/2+(n-i)%2+i)%m==0)
        {
            printf("%d",((n-i)/2+(n-i)%2+i));
            return 0;
        }
    puts("-1");
    return 0;
}
