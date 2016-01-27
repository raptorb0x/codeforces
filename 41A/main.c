#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[101],t[101];
    int i;
    gets(s);
    gets(t);
    for (i=0;i<strlen(s);i++)
        if (s[i]!=t[strlen(s)-(i+1)])
            {
              puts("NO");return 0;
            }
    puts("YES");
    return 0;
}
