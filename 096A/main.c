#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char in[100];
    int k0=0,k1=0,i;
    printf("Hello world!\n");
    scanf("%s",in);
    for(i=0;i<strlen(in);i++)
    {
        if(in[i]=='0')
            {
                k0++;
                k1=0;
            }
            else
            {
                k0=0;
                k1++;
            }
         if ((k0>=7) || (k1>=7))
         {
             printf("YES");
             return 0;
         }

    }
    printf("NO");
    return 0;
}
