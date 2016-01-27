#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i,n,s=0;
    char str[1001],str2[1001];
    scanf("%d\n",&n);
    gets(str);
    gets(str2);
    for (i=0;i<n;i++)
    {
        s+=(abs((int)str[i]-(int)str2[i])>5)?10-(abs((int)str[i]-(int)str2[i])):abs((int)str[i]-(int)str2[i]);
    }
    printf("%d",s);

      return 0;
}
