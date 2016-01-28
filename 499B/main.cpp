#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,m,i;
    cin>>n>>m;
    string a,b;
    vector < vector <string> > ab(0, vector<string>(2));
    vector <string> record(2);
    for (i=0; i<m; i++)
    {
        cin >>a>>b;
        if(b.length()<a.length())
        {
            record[0]=a;
            record[1]=b;
            ab.push_back(record);
        }
    }
    for (i=0; i<n; i++)
    {
        cin>>a;
        for (int j=0; j<ab.size(); j++)
        {
            if (a==ab[j][0])
            {
                a=ab[j][1];
                break;
            }
        }
        cout<<a<<" ";
    }
    return 0;
}
