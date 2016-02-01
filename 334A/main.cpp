#include <iostream>

using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    int n,i,j;
    cin>>n;
    for(i=0;i<n*n/2;)
    {
        for(j=0;j<n/2;j++)
        cout<<i<<" "<<n*n-i++<<" ";
        cout<<endl;
    }
    return 0;
}
