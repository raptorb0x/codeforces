#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    unsigned long long n,st=0,en=0;
    int  temp;
    cin >>n;
    vector <int> b (n);
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        b[i]=temp;
    }
    sort(b.begin(),b.end());
    while (b[0] == b[++st]);
    while (b[n-1]== b[n-1-(++en)]);
    cout <<b[n-1]-b[0] <<" ";
    if(b[0]==b[n-1]) cout<<n*(n-1)/2;
    else cout <<st*en;

    return 0;
}
