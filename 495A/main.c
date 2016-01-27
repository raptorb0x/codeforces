#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,k;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if((a!=c)&&(b!=d))
    {(abs(c-a)==abs(d-b))? printf("%d %d %d %d",a,d,c,b):puts("-1");
        return 0;
    }
    if(a==c)
    {
        k=((a+abs(d-b))>1000)?-1:1;
        printf("%d %d %d %d",a+k*abs(d-b),b,c+k*abs(d-b),d);
    }
        if(d==b)
    {
        k=((d+abs(c-a))>1000)?-1:1;
        printf("%d %d %d %d",a,b+k*abs(c-a),c,d+k*abs(c-a));
    }
    return 0;
}
