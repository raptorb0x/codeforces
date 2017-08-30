#include <stdio.h>
int main()
{
    int longtitude; //долгота - последн€€
    int latitude ;      //широта
    FILE *out;
    out= fopen("longlat.txt","w");
    for (longtitude=-180;longtitude<180;longtitude++)
    {
        for (latitude = -90;latitude<90;latitude++)
            fprintf(out,",,,,,%d,%d\n",latitude,longtitude);
    }
    return 0;
}
