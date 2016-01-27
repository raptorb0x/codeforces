#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n,v,temp,temp2;
    cin >>n>>v;
    v;
    vector <int> a;
    a.push_back(0);
    for (int i=0; i<n; i++)
    {
        cin>>temp;
         for(int j=0; j<temp; j++)
        {
            cin>> temp2;
            if(temp2<v)
            {
                if(a[a.size()-1] !=i+1 ) a.push_back(i+1);
            }
        }
    }
    cout<< a.size()-1<<" ";
    for(int i=1; i<a.size(); i++)
    {
       cout << a[i]<<" ";
    }
    return 0;
}
