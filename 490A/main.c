#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,s1=0,s2=0,s3=0,n,i,j1=0,j2=0,j3=0;
    scanf("%d",&n);
    int n1[n],n2[n],n3[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&a);
    switch (a)
    {
        case 1: {s1++;n1[j1++]=i+1; break;}
        case 2: {s2++;n2[j2++]=i+1; break;}
        case 3: {s3++;n3[j3++]=i+1; break;}

    };

    }

    n=(s1<s2)?s1:s2;
    n=(s3<n)?s3:n;
    //printf("%d %d %d %d\n",s1,s2,s3,n);
    if(n==0)
    {
        puts("0");
        return 0;
    }
    printf("%d",n);
    for (i=0;i<n;i++)
        printf("\n%d %d %d",n1[i],n2[i],n3[i]);
    return 0;
}
