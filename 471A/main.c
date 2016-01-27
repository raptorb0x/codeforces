#include <stdio.h>
#include <stdlib.h>
void insertSort(int* a, int size)
{
    int i, j, tmp;
    for (i = 1; i < size; ++i)
    {
        tmp = a[i];
        for (j = i - 1; j >= 0 && a[j] > tmp; --j)
            a[j + 1] = a[j];
        a[j + 1] = tmp;
    }
}

int main()
{
    int l[6],a[10]={0},i,n=0,c=0,b=0;
    for (i=0;i<6;i++)
        {
        scanf("%d",&l[i]);
        a[l[i]]++;
    }
    insertSort(l,6);
        for (i=0;i<10;i++)
            if(a[i]>=4)
                n=i;
    if(!n)
    {
        puts("Alien");
        return 0;
    }
    for (i=0;i<6;i++)
        if(l[i]!=n)
    {
        c=b;
        b=l[i];
    }
    //printf("%d %d",b,c)
    if(c==b) puts("Elephant");
        else puts("Bear");
    return 0;
}
