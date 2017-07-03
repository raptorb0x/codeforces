#include <iostream>

using namespace std;

int main()
{
    int n,i,minn=-((1<<31)+1),dif;
    cin >>n;
    int a[n];
    for (i=0; i<n; i++)
        cin>>a[i];
    for (i=1; i<n-1; i++)
    {

        dif=a[i+1]-a[i-1];
        minn=min(minn,dif);
    }
    cout<< ((minn==-((1<<31)+1))?0:minn);
    return 0;
}
