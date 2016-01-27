#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[5];
    int i,n;
    scanf("%d",&n);
    for (i=n+1;i<10000;i++)
    {
    sprintf(s,"%d",i);
    if(s[0]!=s[1]&&s[0]!=s[2]&&s[0]!=s[3]&& s[1]!=s[2]&&s[1]!=s[3]&&s[2]!=s[3]) break;
    }
    puts(s);
    return 0;
}
