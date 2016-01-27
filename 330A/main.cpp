#include <iostream>

using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    int r,c,i,j,sum=0;
    cin>>r>>c;
    char s;
    int a[r][c];
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
        {
            cin>>s;
            a[i][j]=(s=='S')?-1:1;
        }
    for (i=0;i<r;i++)
    {

        int flag=1;
        for(j=0; j<c; j++)
            {
                if (a[i][j]==-1) flag=0;
            }
        if(flag)
        {
            for(j=0; j<c; j++)
            {
                if (a[i][j]==1)
                {
                 sum++;
                 a[i][j]=0;
                }
            }
        }
    }
    for (i=0;i<c;i++)
    {

        int flag=1;
        for(j=0; j<r; j++)
            {
                if (a[j][i]==-1) flag=0;
            }
        if(flag)
        {
            for(j=0; j<r; j++)
            {
                if (a[j][i]==1)
                {
                 sum++;
                 a[j][i]=0;
                }
            }
        }
    }

cout<<sum;
    return 0;
}
