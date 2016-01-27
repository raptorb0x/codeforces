#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    long long int sum=0,sum2=0;
    int n,i,in;
    cin >>n;
    vector<int> m;
    for (i=0;i<n;i++)
    {

    cin>>in;
    sum+=in;
        m.push_back(in);
    }
    sort(m.begin(),m.end());
    cout<< sum/n<< "  "<<sum*1.0/n<<endl;
    sum/=n;
    for(i=0;i<n;i++)
    {
        if (sum-m[i]<=0)break;
        sum2+=sum-m[i];
    }
    cout<<sum2;
    return 0;
}
