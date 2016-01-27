#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,temp,maxx=1,kol=1,hig=1;
    cin >> n;
    vector<int> l(n);

    for (int i=0;i<n;i++)
    {
    cin>>temp;
    l[i]=temp;
    }
    sort(l.begin(),l.end());
    for(int i =0;i<n-1;i++)
    {
        if(l[i]!=l[i+1])
        {
            maxx=(maxx<hig)?hig:maxx;
            kol++;
            hig=1;
        }
        else
            hig++;

    }
    maxx=(maxx<hig)?hig:maxx;
    cout<< maxx<<" "<<kol;
    return 0;
}
