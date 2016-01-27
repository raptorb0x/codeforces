#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x=0,n;
    char s[4];
    scanf("%d",&n);
    //printf("%d",n);
    for (i=0;i<n;i++)
    {
     scanf("%s",s);
     x=(s[1]=='+')? x+1:x-1;
     //printf("%d\n",x);
    }
    printf("%d",x);
    return 0;
}
