#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[101];
    int i;
    gets(s);
    for (i=0;i<strlen(s);i++)
    switch (s[i])
    {
    case 'H': {puts("YES"); return 0;}
    case 'Q': {puts("YES"); return 0;}
    case '9':{puts("YES"); return 0;}
        }
    printf("NO");
    return 0;
}
