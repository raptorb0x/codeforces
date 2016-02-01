#include <iostream>

using namespace std;

int main()
{

    int n,m;
    cin >> n >> m;
    int a[100]= {0,};
    int x,y;
    for (int i=0; i<n; i++)
    {
        cin>> x;
        for(int j=0; j<x; j++)
        {
            cin>>y;
            a[y-1]++;
        }
    }
    for (int i=0; i<m; i++)
        if(!a[i])
        {
            cout<<"NO";
            return 0;
        }
    cout<<"YES";
    return 0;
}
