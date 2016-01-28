#include <iostream>

using namespace std;

int main()
{
    long long int m,n,a;
    cin>>n>>m;
    n++;
    a=(n-m>m)?m+1:m-1;
    cout<<((a)?a:1);
    return 0;
}
