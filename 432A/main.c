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
    int n,k,i,t=0;
    scanf("%d%d",&n,&k);
    int y[n];
    for(i=0;i<n;i++)
        scanf("%d",&y[i]);
    insertSort(y,n);

    for (i=0;i<n;i++)
        ((y[i]+k)<=5)?t++:0;
    printf("%d",t/3);

    return 0;
}
