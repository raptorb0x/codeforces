#include <stdio.h>
#include <stdlib.h>
#define ep 0.000001
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
    int n,i,l,fon[1010];
    double min=0;
    scanf("%d%d",&n,&l);
    for (i=0;i<n;i++)
        scanf("%d",&fon[i]);

    insertSort(fon,n);
    //for (i=0;i<n;i++)
    //    printf("%d ",fon[i]);
    min=(fon[0]>l-fon[n-1])?fon[0]*2.0:(l-fon[n-1])*2.0;
    //printf("\n%f\n",min);
    for (i=1;i<n;i++)
    if((fon[i]-fon[i-1])>min)
    {
        min=((fon[i]-fon[i-1]));
       // printf("\ncilc=%.9f\n",min);
    }
    printf("%.10lf",min/2.0);
    return 0;
}
