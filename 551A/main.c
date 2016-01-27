#include <stdio.h>
#include <stdlib.h>
void insertSort(int* a,int* b ,int size)
{
    int i, j, tmp,tmp2;
    for (i = 1; i < size; ++i)
    {
        tmp = a[i];
        tmp2 = b[i];
        for (j = i - 1; j >= 0 && a[j] < tmp; --j)
        {
            a[j + 1] = a[j];
            b[j+1]=b[j];
        }
        a[j + 1] = tmp;
        b[j+1]=tmp2;
    }
}
int main()
{
    int i,n,tmp;
    scanf("%d",&n);
    int a[n],b[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=i+1;
    }
    insertSort(a,b,n);
    tmp=a[0];
    a[0]=1;
    for(i=1;i<n+1;i++)
    {
        if (a[i]==tmp)
            a[i]=a[i-1];
        else
            {
                tmp=a[i];
                a[i]=i+1;
        }
    }
    insertSort(b,a,n);
    for (i=n-1;i>=0;i--)
        printf("%d ",a[i]);
    return 0;
}
