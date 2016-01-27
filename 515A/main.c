#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,s;
    scanf("%d%d%d",&a,&b,&s);
    if(abs(a)+abs(b)<=s)
        if((s-(abs(a)+abs(b)))%2==0) puts("Yes");
        else puts("No");
    else puts("No");
    return 0;
}
