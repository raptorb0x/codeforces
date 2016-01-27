#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[101];
    int i;
    //scanf("%s",s);
    gets(s);
    for (i=1;i<strlen(s);i++)
    {
        if(islower(s[i])) {puts(s); return 0;}
    }
    s[0]=(islower(s[0]))? toupper(s[0]):tolower(s[0]);
    putchar(s[0]);
    for (i=1;i<strlen(s);i++)
    {
        putchar(tolower(s[i]));
    }
    return 0;
}
