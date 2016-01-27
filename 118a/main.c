#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char string[100];
    int i;
    scanf("%s",string);

    for (i=0;i<strlen(string);i++)
         //printf("%s",string);
         tolower(string[i])=='a' || tolower(string[i])=='o' || tolower(string[i])=='y'||tolower(string[i])=='e'||tolower(string[i])=='u'||tolower(string[i])=='i' ?printf("") :printf(".%c",tolower(string[i]));
    return 0;
}
