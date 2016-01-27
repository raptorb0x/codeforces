#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,t;
    char s[51],c;
    scanf("%d%d\n",&n,&t);
    gets(s);
    for (i=0;i<t;i++)
    {
        for (j=0;j<n-1;j++)
            if(s[j]=='B'&& s[j+1]=='G')
            {
              c=s[j];
              s[j]=s[j+1];
              s[j+1]=c;
              j++;
            }
    }
    puts(s);
    return 0;
}
