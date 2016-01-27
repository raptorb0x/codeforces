#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Hello world!\n");
    __int64 a,b,c;
    char in[10],s1[9],s2[9];

    scanf("%I64d",&a);
    if(a>=0)
    {
        printf("%I64d",a);
        return 0;
    }
    //itoa ((int)-a,in,10);
    b=a/10;
    c=(a/100)*10+a%10;
    a=(b>c)?b:c;
    printf("%I64d",a);
    //puts(in);
    return 0;
   /* int x=1,y=2,z;
    z=(x+y)--;
    printf("%d",z);*/
    exit
}
