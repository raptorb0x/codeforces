#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool mysort(vector<int> i,vector<int> j) { return (i[1]<j[1]); }

int main()
{

    int n,k,x,s=0,i;
    cin >> n>>k;
    vector<vector <int> > a (n, vector<int>(2)); // вектор из n веркторов по 2

    for(int i=0;i<n;i++)
    {
        a[i][0]=i+1;
        cin>>x;
        a[i][1]=x;
    }
    sort(a.begin(),a.end(),mysort);
    for (i=0;i<n;i++)
        if(s+a[i][1]>k) break;
        else s+=a[i][1];
    n=i;
    cout <<n<<endl;
    for (i=0;i<n;i++)
        cout<<a[i][0]<<" ";
    return 0;
}
