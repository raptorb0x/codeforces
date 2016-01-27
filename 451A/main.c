#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i;
    scanf("%d%d",&m,&n);
    i=(n<m)?n:m;
    if(i%2) puts("Akshat");
    else puts("Malvika");
    return 0;
}
