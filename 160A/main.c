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
    int a[100],n,i,k=0,s=0,s1=0;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
    }
    insertSort(a,n);
    printf("\n%d\n",s);
    do
    {
     s1+=a[k++];
     printf("%d %d\n",s1,k);
    }while (s1<=s-s1);
    printf("%d",k);
    return 0;
}
