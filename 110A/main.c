#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,k=0;
    char s[19];
    gets(s);
    for (i=0;i<strlen(s);i++)
        if(s[i]=='4'||s[i]=='7') k++;
    if (k==4 || k==7) puts("YES");
        else puts("NO");
    return 0;
}
