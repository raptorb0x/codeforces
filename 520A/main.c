#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k=0,l;
    char in[101],abc[40];
    scanf("%d",&n);
    //gets(in);
    scanf("%s",in);
    for (i=0; i<strlen(in); i++)
    {

        l=0;
        for (j=0; j<k; j++)
            {
               // printf ("%c %c\n",in[i],abc[j]);
            if (tolower(in[i])==abc[j])
            {
                l++;
               // break;
            };
            }
        if(!l)
        {
            abc[k]=tolower(in[i]);
            k++;
        }
    }
    abc[k]='\0';
   // printf("%d   %d",k,strlen(abc));
    //puts(abc);
    if(strlen(abc)>=26) puts("YES");
    else puts("NO");
    return 0;
}
