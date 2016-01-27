#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
int main()
{
    char in[101],out[101];
    int l=0,u=0,i;
    gets(in);
    strcpy(out,in);
    for(i=0;i<strlen(in);i++)
    {
        if(isupper(in[i]))
        {
            u++;
            out[i]=tolower(out[i]);
        }
        else
            {
                l++;
                in[i]=toupper(in[i]);
            }
    }
    if (u>l) puts(in);
        else puts(out);
    return 0;
}
