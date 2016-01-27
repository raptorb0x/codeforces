#include <stdio.h>
#include <stdlib.h>
int comp(int a)
{
    int i;
    if(a==1 ||a==2) return 0;
    for (i=2;i<a;i++)
        if(!(a%i)) return 1;
    return 0;
}
int main()
{
int i,a,b,c;
scanf("%d",&c);
for (i=1;i<c;i++)
    {
     if(!comp(i)) continue;
     if(comp(c-i)) break;
    }
printf("%d %d",i,c-i);
return 0;
}
