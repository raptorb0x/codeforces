#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[301],s2[301];
    int i;
    gets(s1);
    gets(s2);
    for (i=0;i<strlen(s1);i++)
        if(s1[i]==s2[i]) s2[i]='0';
        else s2[i]='1';

    puts(s2);
    return 0;
}
