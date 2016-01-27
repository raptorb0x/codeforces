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
    int a[100],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    insertSort(a,n);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
