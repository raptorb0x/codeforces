#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

const int findstr(const vector<string> &a,const string key)
{
    for (int i=0;i<a.size();i++)
    {
        if(a[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    std::ios::sync_with_stdio(false);
    int n;
    cin>>n;
    vector <string> s(n);
    string s_in;
    int a[n];
    int j=1,id;
    cin>> s[0];
    cout<<"OK"<<endl;
    a[0]=0;
    for(int i=1;i<n;i++)
    {
        cin>>s_in;

        id=findstr(s,s_in);

        if(id>=0)
        {
            a[id]++;
            cout<<s[id]<<a[id]<<endl;
        }
        else
        {
         s[j]=s_in;
         a[j++]=0;
         cout<<"OK"<<endl;
        }
    }

    return 0;
}
