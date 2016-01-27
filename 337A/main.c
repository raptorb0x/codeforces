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
    int n,m,i,j,a[51],k=2000,l=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
    insertSort(a,m);
    for(i=0;i<m-n+1;i++)
    {
        l=0;
        for(j=i+1;j<i+n;j++)
            {
            l=(l<a[i]-a[j])?a[i]-a[j]:l;
            //printf("%d  %d  %d\n",i,j,l);
            }
         k=(l<k)?l:k;
    }
    printf("%d",k);
    return 0;
}
