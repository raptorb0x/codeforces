#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,s=0,b,o=0;
    scanf ("%d%d",&a,&b);
    do
    {
        //printf("%d %d %d\n",s,a,o);
        s+=a;
        o=o%b;
        //printf("%d %d %d\n",s,a,o);
        o+=a%b;
        //printf("%d %d %d\n",s,a,o);
        a=a/b;
        a+=o/b;
    } while(a);
    printf("%d",s);
    return 0;
}
