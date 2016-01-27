#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    char s[5][10]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
    int i,n,a=0;
    scanf("%d",&n);
    for (i=0; a+5*pow(2,i)<n;i++)
        a+=5*pow(2,i);
    //printf("%d  %d\n",a,(int)pow(2,i));
    printf("%s",s[(int)((n-a-1)/pow(2,i))]);
    //printf("\n%d %d",a,i);
    return 0;
}
