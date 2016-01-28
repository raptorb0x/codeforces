#include <iostream>

using namespace std;

int main()
{
    int n,i,j;
    char x;
    cin>>n;
    int a[n][n];
    for(i=0; i<n; i++)
        for (j=0; j<n; j++)
        {
            cin>>x;
            a[i][j]=(x=='o')?1:0;
        }
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
        {
            int k=0;
            if(a[i-1][j]==1 && i>0) k++;
            if(a[i+1][j]==1 && i<n-1) k++;
            if(a[i][j-1]==1 && j>0) k++;
            if(a[i][j+1]==1 && j<n-1) k++;
            if(k%2)
            {
                cout<<"NO";
                return 0;
            }

        }
    cout<<"YES";
    return 0;
}
