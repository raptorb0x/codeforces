#include <iostream>

using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    int na,nb;
    cin>>na>>nb;
    long long int a[na],b[nb];
    int k,m;
    cin>>k>>m;
    int i;
    for(i=0;i<na;i++)
        cin>>a[i];
    for(i=0;i<nb;i++)
        cin>>b[i];
    cout<<((a[k-1]<b[nb-m])?"YES":"NO");
    return 0;
}
