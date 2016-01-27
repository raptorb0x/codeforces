#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[101],b[101];
    int i;
    gets(a);
    gets(b);
    for (i=0; i<strlen(a);i++)
    {
        if ((tolower(a[i]))>(tolower(b[i]))) { puts("1"); return 0;}
        if ((tolower(a[i]))<(tolower(b[i]))) {puts("-1"); return 0;}
    }
    puts("0");
    return 0;
}
