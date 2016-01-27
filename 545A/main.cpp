#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,i,j,flag,k=0;
    cin>>n;
    int ans[n];
    int a[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        cin>>a[i][j];
    for(i=0;i<n;i++)
        {
        flag=1;
        for(j=0;j<n;j++)
        {
            if(a[i][j]==1||a[i][j]==3)
               flag=0;
        }
        if(flag)
        {
            ans[k++]=i+1;
        }
        }
    cout<<k<<endl;
    for (i=0;i<k;i++)
        cout<<ans[i]<<" ";
    return 0;
}
