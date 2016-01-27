#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[1001], a[30];
    int i=1,n=0,j,k;
    gets(s);
    while(i<strlen(s))
    {
        k=0;
        for (j=0;j<=n;j++)
            if (s[i]==a[j]) k++;

        n+=(!k&&strlen(s)>2)?1:0;
        a[j]=(k)?:s[i];
        //printf("%d  %c   %c\n",n,s[i],a[j]);
        i+=3;

    }
    printf("%d",n);
    return 0;
}
