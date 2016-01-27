#include <stdio.h>
#include <stdlib.h>
int main()
{
    char **m;
    int i,n,k;
    scanf ("%d",&n);
    m=(char**)malloc(n*sizeof(char*));
    for (i=0;i<n;i++)
        m[i]=(char*)malloc(100*sizeof(char));
    for (i=0;i<n;i++)
        scanf ("%s",m[i]);
    for (i=0;i<n;i++){
        k=strlen(m[i]);
        k>10? printf("%c%d%c\n",m[i][0],k-2,m[i][k-1]): printf("%s\n",m[i]);
    }
    return 0;
}
