#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,a[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777,4444};
    scanf("%d",&n);
   // printf("%d",a[0]);
    for (i=0;n>=a[i];i++){

    //printf("%d\n",n%a[i]);
     if(n%a[i]==0) {puts("YES"); return 0;}
    }
    puts("NO");
    return 0;
}
