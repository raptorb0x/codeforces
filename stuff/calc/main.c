#include <stdio.h>
int main()
{
    int i=1;
    FILE *out;
    out= fopen("test.txt","w");
    for (i=0;i<24;i++)
        fprintf(out,"%d*(",((i%2)?-1:1));
    fprintf(out,"1");
    while(i--)
         fprintf(out,")");
    return 0;
}
