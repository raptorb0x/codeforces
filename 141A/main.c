#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,j,k;
    char one[101],two[101],all[101];
    gets(one);
    gets(two);
    gets(all);
    strcat(one,two);
    for (i=0; i<strlen(one); i++)
        for(j=0; j<strlen(all); j++)
        {
            //printf("%c %c\n",one[i],all[j]);
            if(one[i]==all[j])
            {
                one[i]=all[j]='0';
                break;
            }
        }
   // puts(one);
    //puts(all);
    for(i=0; i<strlen(one); i++)
        if(one[i]!='0')
        {
            puts("NO");
            return 0;
        }
    for (i=0;i<strlen(all);i++)
        if(all[i]!='0')
        {
            puts("NO");
            return 0;
        }
    puts("YES");
    return 0;
}
