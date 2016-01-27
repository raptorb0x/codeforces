#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,a[10]= {1,1,1,1,1,1,1,1,1,1};
    scanf("%d",&n);
    for (j=1; j<n; j++)
    {
    a[j]*=2;
        for (i=j+1; i<n; i++)
            a[i]+=a[i-1];
    //for (i=j; i<n; i++)
       // printf("%d  ",a[i]);
    //printf("\n");
    }
    printf("%d",a[n-1]);
    return 0;
}
