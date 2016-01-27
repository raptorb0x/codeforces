#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[101];
    int i,a1=0,a2=0,a3=0;
    gets(s);
    for(i=0;i<strlen(s);i+=2)
        {
            a1+=(s[i]=='1')?2:0;
            a2+=(s[i]=='2')?2:0;
            a3+=(s[i]=='3')?2:0;
        }
    //printf("%d%d%d",a1,a2,a3);
    for(i=0;i<a1;i+=2)
        s[i]='1';
    for(i;i<a1+a2;i+=2)
        s[i]='2';
    for (i;i<a1+a2+a3;i+=2)
        s[i]='3';
    puts(s);
    return 0;
}
