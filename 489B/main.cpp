#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,m,i,t=0,k,j;
    cin>>n;
    vector <int> a (n);
    for(i=0; i<n; i++)
        cin>>a[i];
    cin>>m;
    vector <int> b (m);
    for(i=0; i<m; i++)
        cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    if (a.size()>b.size()) swap(a,b);

   /* for (i=0; i<a.size(); i++)
        cout<<a[i]<<" ";
    cout<<endl;
    for (i=0; i<b.size(); i++)
        cout<<b[i]<<" ";
    cout<<endl;*/

    j=0;
    i=0;
    while(i<a.size()&&j<b.size())
    {
        if(abs(a[i]-b[j])<=1)
        {
            //cout <<" "<<a[i]<<" "<<b[j]<<endl;
            t++;
            i++;
            j++;
            continue;
        }
        if(a[i]<b[j])
        {
            i++;
            continue;
        }

        if(a[i]>b[j])
        {
            j++;
            continue;
        }
    }
    cout<<t;
    return 0;
}
