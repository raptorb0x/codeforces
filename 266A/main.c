#include <stdio.h>
#include <stdlib.h>

int main()
{
  char s[51];
  int i=0,k=0,n;
 scanf("%d\n",&n);
  gets(s);
  //puts(s);
for(i=0;i<n;i++)
    if(s[i]==s[i+1]) k++;
  printf("%d",k);
}
