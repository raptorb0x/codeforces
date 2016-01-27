#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,k=0;
    char s[101];
    gets(s);
    do{
    switch(s[i])
    {
    case 'h':
        {switch (k)
        {
        case 0: {k++;break;}
        }
        break;
        }
        case 'e':
        {switch (k)
        {
        case 1: {k++; break;}
        }
        break;
        }
        case 'l':
        {switch (k)
        {
        case 2: {k++; break;}
        case 3: {k++; break;}
        }
        break;
        }
        case 'o':
        {switch (k)
        {
        case 4: {k++;puts("YES");return 0;}
        }
        break;
        }
    }
    i++;
    }while(i<strlen(s));
    puts("NO");
    return 0;
}
