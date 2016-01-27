#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[101];
    int i,j,k=0;
    gets(s);
    for (i=0;i<strlen(s);i++)
        if(s[i]!='0')
        {
            k++;
            for (j=i+1;j<strlen(s);j++)
                s[j]=(s[j]==s[i])?'0':s[j];
        }
    //puts(s);
    if(k%2) puts("IGNORE HIM!");
    else puts("CHAT WITH HER!");;
    //printf("%d",k);

    return 0;
}
