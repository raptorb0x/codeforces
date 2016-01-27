#include <iostream>

using namespace std;

int main()
{
    int n,m,i,temp;
    cin>>n;
    int a[n];
    cin>>a[0];
    for(i=1; i<n; i++)
    {
        cin>>temp;
        a[i]=a[i-1]+temp;
    }
    cin>>m;
    int q[m];
    for(i=0; i<m; i++)
        cin>>q[i];
    for(i=0; i<m; i++)
        for(int j=0; j<n; j++)
            if(q[i]<=a[j])
            {
                cout<<j+1<<endl;
                break;
            }
    return 0;
}
