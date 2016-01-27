#include <stdio.h>
#include <stdlib.h>
void insertSort(int* a,int* b ,int size)
{
    int i, j, tmp,tmp2;
    for (i = 1; i < size; ++i)
    {
        tmp = a[i];
        tmp2 = b[i];
        for (j = i - 1; j >= 0 && a[j] > tmp; --j)
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
    int s,n,i,j,x[1000],y[1000];
    scanf("%d%d",&s,&n);
    for(i=0;i<n;i++)
    scanf("%d%d",&x[i],&y[i]);
    insertSort(x,y,n);
    //return 0;
    for(i=0;i<n;i++)
        if(s<=x[i]) {puts("NO");return 0;}
            else s+=y[i];
    puts("YES");
    //printf("%d %d\n",x[i],y[i]);*/

    return 0;
}
