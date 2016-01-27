#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Hello world!\n");
    int i,s=0,j=0;
    scanf("%d",&i);
    s=i;
    i--;
    for(i;i>0;i--,j++)
    {

         s+=i+j*i;
         //printf("%d\n",s);
    }
    printf("%d",s);
    return 0;
}
