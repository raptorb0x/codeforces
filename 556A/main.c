#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,n0=0,n1=0,d;
    scanf("%d\n",&n);
    char s[n];
    gets(s);
    for (i=0;i<n;i++)
        (s[i]=='0')?n0++:n1++;
    d=(n0<n1)?n1-n0:n0-n1;
    printf("%d",d);
    return 0;
}
