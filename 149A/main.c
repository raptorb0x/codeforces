#include <stdio.h>
#include <stdlib.h>

void insertSort(int* a, int size)
{
    int i, j, tmp;
    for (i = 1; i < size; ++i)
    {
        tmp = a[i];
        for (j = i - 1; j >= 0 && a[j] < tmp; --j)
            a[j + 1] = a[j];
        a[j + 1] = tmp;
    }
}

int main()
{
    int k,a[12],s=0,i;
    scanf("%d",&k);
    for(i=0; i<12; i++)
        scanf("%d",&a[i]);
    insertSort(a,12);


    for(i=0;s<k && i<12; i++)
        s+=a[i];

        if(s<k) puts("-1");
    else printf("%d",i);
    return 0;
}
