#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,t;
    char s[19];
    gets(s);
    n=strlen(s);
    if(s[0]=='9') printf("%d",9);
    else printf("%d",((s[0]-'0')>4)?(9-(s[0]-'0')):s[0]-'0');
    for (i=1;i<n;i++)
        {
            t=((s[i]-'0')>4)?(9-(s[i]-'0')):s[i]-'0';
        printf("%d",t);
    }
    return 0;
}
