#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    char s,in[101],*d="qwertyuiopasdfghjkl;zxcvbnm,./";
    scanf("%c\n",&s);
    k=(s=='R')?-1:1;
    gets(in);
    //scanf("%s",in);
    for (i=0; i<strlen(in); i++)
        for (j=0; j<strlen(d);j++)
        {
        //printf("%c  %c \n",in[i],d[j]);
            if(in[i]==d[j])
            {
                in[i]=d[j+k];
                //puts(in);
                break;
            }
        }
    puts(in);
    return 0;
}
