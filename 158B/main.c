#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,s=0,a1=0,a2=0,a3=0,a4=0;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf ("%d",&s);
    switch (s)
    {
        case 4:a4++;break;
        case 3:a3++;break;
        case 2:a2++;break;
        case 1:a1++;break;
    }
    }
    s=a4;
    s=s+a3;
    a1=(a3<a1)? a1-a3 :0;
    if (a2%2==0) s=s+(a2/2);
    else
    {
        s=s+((a2+1)/2);
        a1=(a1!=0)? a1-1:0;
    }
    if (a1!=0) s=s+((a1+4)/4);
    printf("%d",s);
    return 0;
}
