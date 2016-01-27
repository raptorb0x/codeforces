#include <stdio.h>
#include <stdlib.h>

int main()
{
    __int64 a,b,c,d;
    int s=0;
    scanf("%I64d%I64d%I64d%I64d",&a,&b,&c,&d);
    if(a==b) {s++;b=-1; }
    if(a==c) {s++;c=-2; }
    if(a==d) {s++;d=-3; }
    if(b==c) {s++;c=-4; }
    if(b==d) {s++;d=-5; }
    if(c==d) {s++;d=-6; }
    printf("%d",s);
    return 0;
}
