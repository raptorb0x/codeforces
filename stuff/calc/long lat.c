#include <stdio.h>
int main()
{
    int longtitude; //������� - ���������
    int latitude ;      //������
    FILE *out;
    out= fopen("longlat.txt","w");
    for (longtitude=-180;longtitude<180;longtitude++)
    {
        for (latitude = -90;latitude<90;latitude++)
            fprintf(out,",,,,,%d,%d\n",latitude,longtitude);
    }
    return 0;
}
