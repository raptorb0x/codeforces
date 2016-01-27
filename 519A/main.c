#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char all[65]="\0",in[9];
    int i,b=0,w=0;
    for (i=0;i<8;i++)
    {
        scanf("%s",in);
        strcat(all,in);
    }
    for (i=0;i<64;i++){
        switch(all[i])
        {
            default: {continue;};
            case 'Q': {w+=9;break;};
            case 'q':{b+=9;break;};
            case 'R': {w+=5;break;};
            case 'r':{b+=5;break;};
            case 'B': {w+=3;break;};
            case 'b':{b+=3;break;};
            case 'N': {w+=3;break;};
            case 'n':{b+=3;break;};
            case 'P': {w+=1;break;};
            case 'p':{b+=1;break;};
        }

        //printf("%c",all[i]);
    }
   // printf("\n%c",all[0]);
    if(w>b) puts("White");
    if (w==b) puts("Draw");
    if(w<b) puts("Black");;
    //printf("%d %d",w,b);
    return 0;
}
