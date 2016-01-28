#include <stdio.h>
#include <stdlib.h>

int main()
{
    char in[201],out[200];
    int i,j=0;
    gets(in);
    for(i=0;i<strlen(in);i++)
    {
        if(in[i]=='W' && in[i+1]=='U' && in[i+2]=='B')
        {
            out[j]=(out[j-1]==' '|| j==0)?:' ';
            j+=(out[j-1]==' '|| j==0)?0:1;
            i+=2;
            continue;
        }
        out[j]=in[i];
        j++;
    }
    out[j]='\0';
    puts(out);
    return 0;
}
