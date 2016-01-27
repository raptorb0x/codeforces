#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool mysort(vector<int> i,vector<int> j) { return (i[0]<j[0]); }
int main()
{
    int n,i,a,b;
    cin>>n;
    vector<vector <int> > v (n, vector<int>(2));
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        v[i][0]=a;
        v[i][1]=b;
    }
    sort(v.begin(),v.end(),mysort);
    for(i=0;i<n-1;i++)
    {
     if(v[i][1]>v[i+1][1])
     {
         cout<<"Happy Alex";
         return 0;
     }
    }
    cout<<"Poor Alex";
    return 0;
}
