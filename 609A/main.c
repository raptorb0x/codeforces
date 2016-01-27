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
    int n,i;
    __int64 m,s=0;
    scanf("%d%I64d",&n,&m);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    insertSort(a,n);
    for(i=0;s<m;i++)
    s+=a[i];
    printf("%d",i);
    return 0;
}
